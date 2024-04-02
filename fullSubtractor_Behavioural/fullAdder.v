`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:00:38 04/03/2024 
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
    input bor_in,
    output diff,
    output bor_out
    );
	 reg diff,bor_out;
	 
	 always @(*)
	 begin
		diff = (a^b^bor_in);
		bor_out = (~a&b)|((~a^b)&bor_in);
	 end


endmodule
