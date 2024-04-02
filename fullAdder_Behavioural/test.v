`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:50:01 04/02/2024
// Design Name:   fullAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/fullAdder_Behavioural/test.v
// Project Name:  fullAdder_Behavioural
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
	reg cin = 0;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	fullAdder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.carry(carry)
	);

	always #100 {a,b,cin} = {a,b,cin}+1;

	initial $monitor("A = %d, B = %d, C = %d, SUM = %d, CARRY = %d",a,b,cin,sum,carry);
	initial #800 $finish;
      
endmodule

