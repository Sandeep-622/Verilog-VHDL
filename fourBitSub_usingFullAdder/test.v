`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:35:24 04/04/2024
// Design Name:   fourBitSub
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/fourBitSub_usingFullAdder/test.v
// Project Name:  fourBitSub_usingFullAdder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fourBitSub
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
	reg [3:0] a;
	reg [3:0] b;
	reg b_in;

	// Outputs
	wire [3:0] sum;
	wire b_out;

	// Instantiate the Unit Under Test (UUT)
	fourBitSub uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.b_in(b_in), 
		.b_out(b_out)
	);

	initial begin
		// Initialize Inputs
		a = 5;
		b = 2;
		b_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 10;
		b = 4;
		b_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 6;
		b = 3;
		b_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

