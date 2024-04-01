`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:49:14 04/01/2024 
// Design Name: 
// Module Name:    halfAdder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module halfAdder(a,b,sum,carry);
    input a,b;
	 output reg sum, carry;
	 always@(*)
	 begin 
		sum = a^b;
		carry = a&b;
	 end 

endmodule
