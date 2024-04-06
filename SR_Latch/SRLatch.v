`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:07:19 04/06/2024 
// Design Name: 
// Module Name:    SRLatch 
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
module SRLatch(
    input s,
    input r,
    inout q,
    inout q_bar
    );
	 nand(q,~s,q_bar);
	 nand(q_bar,~r,q);


endmodule
