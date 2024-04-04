`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:15:10 04/04/2024 
// Design Name: 
// Module Name:    mux_8x1 
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
module mux_8x1(
    input [7:0]i,
    input [2:0]s,
    output out
    );
	 wire k1,k2,k0,k4,l0,l1,l2;
	 mux_2_1 inst1(i[0],i[1],s[0],k0);
	 mux_2_1 inst2(i[2],i[3],s[0],k1);
	 mux_2_1 inst3(i[4],i[5],s[0],k2);
	 mux_2_1 inst4(i[6],i[7],s[0],k3);
	 mux_2_1 inst5(k0,k1,s[1],l0);
	 mux_2_1 inst6(k2,k3,s[1],l1);
	 mux_2_1 inst7(l0,l1,s[2],out);

endmodule

module mux_2_1(
    input a,
    input b,
    input s,
    output out
    );
	 assign out = ((~s)&a)|(s&b);
	 

endmodule
