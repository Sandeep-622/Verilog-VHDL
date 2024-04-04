`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:03:20 04/05/2024 
// Design Name: 
// Module Name:    demux_1x2 
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
module demux_1x2(
    input i,
    input s,
    output out1,
    output out2
    );
	 
	 assign out1 = (~s)&i;
	 assign out2 = s&i;


endmodule
