`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:25:40 04/04/2024
// Design Name:   mux_8x1
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/Mux_8x1_Using_2x1/test.v
// Project Name:  Mux_8x1_Using_2x1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_8x1
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
	reg [7:0] i;
	reg [2:0] s = 0;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux_8x1 uut (
		.i(i), 
		.s(s), 
		.out(out)
	);

	initial begin
		i = 167;
	end
	always #50 s = s+1;
	
	initial begin
		$monitor("I = %b | S = %b | OUT = %b",i,s,out);
		#800 $finish;
	end
      
endmodule

