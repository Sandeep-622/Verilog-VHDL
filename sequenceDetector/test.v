`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:56:16 04/04/2024
// Design Name:   sequenceDetector
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/sequenceDetector/test.v
// Project Name:  sequenceDetector
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sequenceDetector
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
	reg [7:0] a;
	reg clk = 0;

	// Outputs
	wire d;

	// Instantiate the Unit Under Test (UUT)
	sequenceDetector uut (
		.a(a), 
		.d(d),
		.clk(clk)
	);
	always #50 clk = ~clk;
	initial begin
		// Initialize Inputs
		a = 21;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

