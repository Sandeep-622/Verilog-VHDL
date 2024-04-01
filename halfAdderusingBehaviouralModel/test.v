`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:54:44 04/01/2024
// Design Name:   halfAdder
// Module Name:   /home/sandeep/git_workspace/Verilog-VHDL/halfAdderusingBehaviouralModel/test.v
// Project Name:  halfAdderusingBehaviouralModel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: halfAdder
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
	reg a;
	reg b;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	halfAdder uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.carry(carry)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		#2 a = 1'b0; b = 1'b1;
		#2 a = 1'b1; b = 1'b0;
		#2 a = 1'b1; b = 1'b1;
        
		// Add stimulus here

	end
	
	initial $monitor("input1 = %b | input2 = %b | sum = %b | carry = %b",a,b,sum,carry);
	initial #10 $finish ;
      
endmodule

