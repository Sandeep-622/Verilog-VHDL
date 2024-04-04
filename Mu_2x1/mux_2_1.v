`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:58 04/04/2024 
// Design Name: 
// Module Name:    mux_2_1 
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
module mux_2_1(
    input a,
    input b,
    input s,
    output out
    );
	 assign out = ((~s)&a)|(s&b);
	 

endmodule
