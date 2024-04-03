`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:23:47 04/03/2024
// Design Name:   fullAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/FullAdderUsingHalfAdder/test.v
// Project Name:  FullAdderUsingHalfAdder
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
	reg a=0;
	reg b=0;
	reg cin=0;

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
	always #100 {a,b,cin} = {a,b,cin} + 1;

	initial begin
		$monitor("A=%d | B=%d | CIN=%d | SUM=%d | CARRY=%d",a,b,cin,sum,carry);
		#800 $finish;
	end
      
endmodule

