`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:03:08 04/04/2024 
// Design Name: 
// Module Name:    sixteenBitAdder 
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
module sixteenBitAdder(
    input [15:0] a,
    input [15:0] b,
    output reg [15:0] sum, 
    output reg co,
    input cin
    );
	 always@(a or b or cin)
	 begin
		{co,sum} = a + b + cin;
	 end

endmodule
