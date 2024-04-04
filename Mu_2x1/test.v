`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:33:02 04/04/2024
// Design Name:   mux_2_1
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/Mu_2x1/test.v
// Project Name:  Mu_2x1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_2_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg a = 0;
	reg b = 0;
	reg s = 0;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux_2_1_IfElse uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.out(out)
	);
	always #100 {a,b,s} = {a,b,s} + 1;

      
endmodule

