`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:48:51 04/03/2024
// Design Name:   FourBitAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/FourBitAdder/test.v
// Project Name:  FourBitAdder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FourBitAdder
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
	reg cin;

	// Outputs
	wire [4:0] sum;

	// Instantiate the Unit Under Test (UUT)
	FourBitAdder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Initialize Inputs
		a = 10;
		b = 2;
		cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
		// Initialize Inputs
		a = 8;
		b = 3;
		cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
		// Initialize Inputs
		a = 6;
		b = 7;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

