// Benchmark "test" written by ABC on Tue Jan 21 21:15:59 2025

module test ( 
    i1, i2, i3, i4,
    o1  );
  input  i1, i2, i3, i4;
  output o1;
  wire new_n6, new_n7, new_n8, new_n9, new_n10;
  assign new_n6 = ~i1 & i2;
  assign new_n7 = i1 & ~i2;
  assign new_n8 = ~new_n6 & ~new_n7;
  assign new_n9 = i3 & ~new_n8;
  assign new_n10 = ~i3 & new_n9;
  assign o1 = i4 | new_n10;
endmodule


