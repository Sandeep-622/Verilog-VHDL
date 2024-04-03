`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:18:14 04/04/2024
// Design Name:   sixteenBitAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/SixteenBitAdder/test1.v
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

module test1;

	// Inputs
	reg [15:0] a=0;
	reg [15:0] b=0;
	reg cin=0;

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
	
		always #50 a = a + 1;
		always #100 b = b + 1;
		always #150 cin = ~cin;

      
endmodule

