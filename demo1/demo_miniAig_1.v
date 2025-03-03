// Benchmark "MiniAig" written by ABC on Wed Feb  5 11:38:08 2025

module MiniAig ( 
    pi0, pi1, pi2, pi3,
    po0  );
  input  pi0, pi1, pi2, pi3;
  output po0;
  wire new_n6, new_n7;
  assign new_n6 = pi0 & pi1;
  assign new_n7 = ~pi2 & ~new_n6;
  assign po0 = ~pi3 | new_n7;
endmodule


