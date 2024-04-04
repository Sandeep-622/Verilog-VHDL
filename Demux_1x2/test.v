`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:04:45 04/05/2024
// Design Name:   demux_1x2
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/Demux_1x2/test.v
// Project Name:  Demux_1x2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux_1x2
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
	reg i;
	reg s;

	// Outputs
	wire out1;
	wire out2;

	// Instantiate the Unit Under Test (UUT)
	demux_1x2_ifElse uut (
		.i(i), 
		.s(s), 
		.out1(out1), 
		.out2(out2)
	);

	initial begin
		// Initialize Inputs
		i = 1;
		s = 0;
	end
	always #50 s = ~s;
endmodule

