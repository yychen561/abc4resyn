// Benchmark "MiniAig" written by ABC on Fri Feb 28 23:34:54 2025

module MiniAig ( 
    pi0, pi1,
    po0, po1  );
  input  pi0, pi1;
  output po0, po1;
  wire new_n6;
  assign po0 = ~pi0 | ~pi1;
  assign new_n6 = ~pi0 & ~pi1;
  assign po1 = ~po0 | new_n6;
endmodule


