`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:40:36 04/06/2024
// Design Name:   DFlipFlop
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/D_FlipFlop/test.v
// Project Name:  D_FlipFlop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DFlipFlop
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
	reg d;
	reg clk;
	reg clear;
	reg preset;

	// Outputs
	wire q;
	wire q_bar;

	// Instantiate the Unit Under Test (UUT)
	DFlipFlop uut (
		.d(d), 
		.clk(clk), 
		.clear(clear), 
		.preset(preset), 
		.q(q), 
		.q_bar(q_bar)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;
		clear = 1;
		preset = 1;

	end
	always #100 d = ~d;
	always #50 clk = ~clk;
	always #200 {clear,preset} = {clear,preset} +1;

endmodule

