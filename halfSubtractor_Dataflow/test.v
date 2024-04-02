`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:50:47 04/03/2024
// Design Name:   halfSubtractor
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/halfSubtractor_Dataflow/test.v
// Project Name:  halfSubtractor_Dataflow
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: halfSubtractor
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

	// Outputs
	wire diff;
	wire borrow;

	// Instantiate the Unit Under Test (UUT)
	halfSubtractor uut (
		.a(a), 
		.b(b), 
		.diff(diff), 
		.borrow(borrow)
	);
	always #100 {a,b} = {a,b} + 1;
	initial begin
		$monitor("A = %d | B = %d | DIFF. = %d | BORROW = %d",a,b,diff,borrow);
		#400 $finish;
	end
      
endmodule

