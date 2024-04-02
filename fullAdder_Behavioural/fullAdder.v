`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:07 04/02/2024 
// Design Name: 
// Module Name:    fullAdder 
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
module fullAdder(
    input a,
    input b,
    input cin,
    output sum,
    output carry
    );
	 reg sum , carry;
	 always @(*)
	 begin
		sum = (a^b^cin);
		carry = (a&b)|((a^b)&cin);
	 end


endmodule
