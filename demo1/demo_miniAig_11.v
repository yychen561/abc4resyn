// Benchmark "MiniAig" written by ABC on Wed Feb 19 13:42:51 2025

module MiniAig ( 
    pi0, pi1, pi2, pi3, pi4,
    po0  );
  input  pi0, pi1, pi2, pi3, pi4;
  output po0;
  wire new_n7, new_n8, new_n9, new_n10, new_n11, new_n12;
  assign new_n7 = ~pi0 & ~pi2;
  assign new_n8 = ~pi0 & ~pi3;
  assign new_n9 = ~new_n7 & ~new_n8;
  assign new_n10 = ~pi1 & ~pi2;
  assign new_n11 = new_n9 & ~new_n10;
  assign new_n12 = ~pi1 & ~pi3;
  assign po0 = new_n11 & ~new_n12;
endmodule


