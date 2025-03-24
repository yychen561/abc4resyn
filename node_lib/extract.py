import re
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '../lef')))
from extract_lef import MacroExtractor

def match_cell(file_path):
    # 匹配cell
    pattern = r'cell \((\w+)\)'

    with open(file_path, 'r') as file:
        content = file.read()
    
    matches = re.findall(pattern, content)
    
    return matches

def match_func(file_path):
    #匹配function
    pattern = r'\bfunction : \"([^"]+)\"'

    with open(file_path, 'r') as file:
        content = file.read()
    
    matches = re.findall(pattern, content)
    
    return matches


filename = 'asap7sc7p5t_ALL_RVT_FF_nldm_201020'# 替换成文件名称
file_path = './' + filename + '.lib'  
matches_cell = match_cell(file_path)
matches_func = match_func(file_path)

ifx = -1
ihx = -1
for i in range(len(matches_cell)):
    if matches_cell[i] == 'FAx1_ASAP7_75t_R' :
        matches_cell[i] = 'FAx1_ASAP7_75t_R_SN'
        ifx = i
    if matches_cell[i] == 'HAxp5_ASAP7_75t_R' :
        matches_cell[i] = 'HAxp5_ASAP7_75t_R_SN'
        ihx = i
if ihx > ifx & ifx != -1 & ihx != -1:
    matches_cell.insert(ihx, "HAxp5_ASAP7_75t_R_CON")
    matches_cell.insert(ifx, "FAx1_ASAP7_75t_R_CON")
elif ifx > ihx & ifx != -1 & ihx != -1:
    matches_cell.insert(ifx, "FAx1_ASAP7_75t_R_CON")
    matches_cell.insert(ihx, "HAxp5_ASAP7_75t_R_CON")



output2txt = int(input("Do you want to output lib to .txt file? (1/0): "))
if output2txt:
    for it1, it2 in zip(matches_cell, matches_func):
        print(it1, it2, file = open(filename + '.txt', 'a'))
else:
    sys.stdout = sys.__stdout__

#生成.c文件
output2c = int(input("Do you want to output to .c file? (1/0): "))
# 打开一个文件进行写入
if output2c:
    sys.stdout = open(filename + '.c', 'w')
else:
    sys.stdout = sys.__stdout__

print("#include \"node_logic.h\"\n")



# lef文件中pin顺序提取  
lef_path = '/app/2024_ICCAD_Contest_Gate_Sizing_Benchmark/platform/ASAP7/lef/asap7sc7p5t_27_R_1x_201211.lef'
extractor = MacroExtractor(lef_path)
macro_dict = extractor.macro2dict()


for cell, func in zip(matches_cell, matches_func):
#    print(" {\"%s\", %s}," %(cell, cell), end='\n')
    print("int %s(Mini_Aig_t *p" %cell, end='')

    #查找node名称
    node_matches = re.findall(r'[A-Za-z]+\d?', func)
    # 转换为集合去重，再转为排序后的列表
    pin_name = sorted(set(node_matches))  # 按字母和数字排序

    if (cell == 'FAx1_ASAP7_75t_R_SN' or cell == 'FAx1_ASAP7_75t_R_CON'):
        cell_name  =  'FAx1_ASAP7_75t_R'
    elif (cell == 'HAxp5_ASAP7_75t_R_SN' or cell == 'HAxp5_ASAP7_75t_R_CON'):
        cell_name  =  'HAxp5_ASAP7_75t_R'
    else:
        cell_name = cell
        
    macro_dict[cell_name] = [pin for pin in macro_dict[cell_name] if pin in pin_name]
    
    # if(macro_dict[cell_name] != pin_name):
    #     print("ERROR: %s pins are not sorted according to pin name" %cell)

    pin_name = macro_dict[cell_name]

    #检查node数量是否正确
    node_num = 0
    for i in cell:
        if i in '0123456789':
            node_num += int(i);
        elif i == 'x':
            break
    #if node_num != len(node_name):
    #    print("Error: %s %d %d" %(cell, node_num, len(node_name)))
    
    #输出所需要的int node_name
    if len(pin_name) == 0:
        print(")",end = '\n')
    else:
        print(", int* Ptr,int Prt_len)",end = '\n')
    '''
    for i, pin in enumerate(pin_name):
        if i == len(pin_name) - 1:
            print(", int %s)" %pin, end='\n')
        else:
            print(", int %s" %pin, end='')
    '''

    # print(';')
    


    print("{")

    for i in range(len(pin_name)):
        if i == len(pin_name) - 1:
            print("int %s = Ptr[%d];" %(pin_name[i], i), end='\n')
        else:
            print("int %s = Ptr[%d];" %(pin_name[i], i), end='')


    #输出MiniAig函数表达式   Mini_AigAnd(), Mini_AigOr(), Mini_AigLitNot()
    if(func == "0"):
        print("return 0;")
    elif func == "1":
        print("return 1;")
    elif filename == "asap7sc7p5t_INVBUF_RVT_FF_nldm_201020":
        func = re.sub(r'!([A-Za-z0-9_]+)', r'Mini_AigLitNot(\1)', func)
        print("return %s;" %func)
    else:
        #匹配括号内的内容
        part = re.findall(r'\(([^)]+)\)', func) # such as (.. * ..) + () + ()
        #把!A替换成not(A)
        for i in range(len(part)): 
            part[i] = re.sub(r'!([A-Za-z0-9_]+)', r'Mini_AigLitNot(\1)', part[i])
        #把*替换成And
        equation_and = []
        for it in part:
            and_input = it.split('*')
            if len(and_input) == 0:
                print("ERROR:AND node input is wrong")
            equation = ""
            for i in range(len(and_input)):
                if i == 0:
                    equation += and_input[i]
                    continue
                else:
                    equation ="Mini_AigAnd(p, " + and_input[i] + ", " + equation + ")"
            equation_and.append(equation)
        #把+替换成Or
        # if len(part) == 0:
                # print("ERROR:OR node input is wrong")
        equation_or = ""
        for i in range(len(equation_and)):
            if i == 0:
                equation_or += equation_and[i]
                continue
            else:
                equation_or ="Mini_AigOr(p, " + equation_and[i] + ", " + equation_or + ")"
        print("return "+equation_or+";")
    
    print("};\n")
 
