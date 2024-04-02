`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:03:15 04/03/2024
// Design Name:   fullAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/fullSubtractor_Behavioural/test.v
// Project Name:  fullSubtractor_Behavioural
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
	reg bor_in = 0;

	// Outputs
	wire diff;
	wire bor_out;

	// Instantiate the Unit Under Test (UUT)
	fullAdder uut (
		.a(a), 
		.b(b), 
		.bor_in(bor_in), 
		.diff(diff), 
		.bor_out(bor_out)
	);
	always #100 {a,b,bor_in} = {a,b,bor_in} + 1;
	initial begin
		$monitor("A = %d | B = %d | BOR_IN = %d | DIFF = %d | BOR_OUT = %d",a,b,bor_in,diff,bor_out);
		#800 $finish;
	end
      
endmodule

