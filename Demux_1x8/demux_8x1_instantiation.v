`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:35:02 04/05/2024 
// Design Name: 
// Module Name:    demux_8x1_instantiation 
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
module demux_8x1_instantiation(
    input in,
    input [2:0]s,
    output [7:0]out
    );
	 wire k1,k2,l1,l2,l3,l4;
	 demux_1x2 inst1(in,s[2],k1,k2);
	 demux_1x2 inst2(k1,s[1],l1,l2);
	 demux_1x2 inst3(k2,s[1],l3,l4);
	 demux_1x2 inst4(l1,s[0],out[0],out[1]);
	 demux_1x2 inst5(l2,s[0],out[2],out[3]);
	 demux_1x2 inst6(l3,s[0],out[4],out[5]);
	 demux_1x2 inst7(l4,s[0],out[6],out[7]);
			

endmodule

module demux_1x2(
    input i,
    input s,
    output out1,
    output out2
    );
	 
	 assign out1 = (~s)&i;
	 assign out2 = s&i;


endmodule
