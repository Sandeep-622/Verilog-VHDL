`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:55:36 04/03/2024 
// Design Name: 
// Module Name:    halfSub 
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
module halfSub(
    input a,
    input b,
    output diff,
    output borrow
    );
	 reg diff, borrow;
	 
	 always @(*)
	 begin 
		diff = a^b;
		borrow = (~a)&b;
	 end
endmodule
