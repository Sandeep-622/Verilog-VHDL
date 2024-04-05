`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:44:11 04/05/2024
// Design Name:   demux_8x1_instantiation
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/Demux_1x8/test.v
// Project Name:  Demux_1x8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux_8x1_instantiation
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
	reg in;
	reg [2:0] s;
	
	

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	demux_8x1_instantiation uut (
		.in(in), 
		.s(s), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 1;
		s = 0;
	end
	
	always #50 s = s + 1;
      
endmodule

