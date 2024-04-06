`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:13:39 04/06/2024
// Design Name:   SRLatch
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/SR_Latch/test.v
// Project Name:  SR_Latch
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SRLatch
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
	reg s;
	reg r;

	// Bidirs
	wire q;
	wire q_bar;

	// Instantiate the Unit Under Test (UUT)
	SRLatch uut (
		.s(s), 
		.r(r), 
		.q(q), 
		.q_bar(q_bar)
	);

	initial begin

		// Initialize Inputs
		s <= 0;
		r <= 0;
		
		#100;
	end
		always #50 
		begin
		{s,r} = {s,r}+1;
		//When S and R both becomes 1 i.e illegal input then it is changed to  0 each.
		if ((s == 1) && (r == 1)) begin
			s=0;
			r=0;
		end
		end
		
		initial #600 $finish ;
endmodule

