`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:48:51 04/03/2024
// Design Name:   FourBitAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/FourBitAdder/test.v
// Project Name:  FourBitAdder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FourBitAdder
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
	reg [3:0] a = 4'b0000;
	reg [3:0] b = 4'b0000;
	reg cin = 0;

	// Outputs
	wire [4:0] sum;

	// Instantiate the Unit Under Test (UUT)
	FourBitAdder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum)
	);

	always #20 a = a+1;
	always #40 b = b+1;
	always #10 cin = ~cin;
      
endmodule

