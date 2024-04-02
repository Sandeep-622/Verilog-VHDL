`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:51 04/02/2024
// Design Name:   fullAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/fullAdder_DataFlow/test.v
// Project Name:  fullAdder_DataFlow
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fullAdder
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
	reg c_in = 0;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	fullAdder uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.sum(sum), 
		.carry(carry)
	);
	always #100 {a,b,c_in}={a,b,c_in}+1;

      
endmodule

