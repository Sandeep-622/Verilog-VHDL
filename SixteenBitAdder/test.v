`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:09:25 04/04/2024
// Design Name:   sixteenBitAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/SixteenBitAdder/test.v
// Project Name:  SixteenBitAdder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sixteenBitAdder
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
	reg [15:0] a = 0;
	reg [15:0] b = 0;
	reg cin = 0;

	// Outputs
	wire [15:0] sum;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	sixteenBitAdder uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.co(co), 
		.cin(cin)
	);
	always #20 {a,b,cin} = {a,b,cin} + 1;
      
endmodule

