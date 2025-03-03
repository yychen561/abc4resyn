// Benchmark "test" written by ABC on Tue Jan 21 21:14:56 2025

module test ( 
    i1, i2, i3, i4,
    o1  );
  input  i1, i2, i3, i4;
  output o1;
  wire new_new_w1, new_new_w2;
  assign new_new_w1 = i3 & (i1 ^ i2);
  assign new_new_w2 = new_new_w1 & ~i3;
  assign o1 = new_new_w2 | i4;
endmodule


