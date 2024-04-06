`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:54:36 04/06/2024
// Design Name:   SR_FlipFlop
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/SR_FlipFlop/test.v
// Project Name:  SR_FlipFlop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SR_FlipFlop
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
	reg s=0;
	reg r=0;
	reg clk=0;

	// Outputs
	wire q;
	wire q_bar;

	// Instantiate the Unit Under Test (UUT)
	SR_FlipFlop uut (
		.s(s), 
		.r(r), 
		.clk(clk), 
		.q(q), 
		.q_bar(q_bar)
	);

	always #50 begin
		{s,r} = {s,r} + 1;
		
	end
	always # 25 clk = ~clk;
      
endmodule

