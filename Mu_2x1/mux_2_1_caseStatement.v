`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:38:47 04/04/2024 
// Design Name: 
// Module Name:    mux_2_1_caseStatement 
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
module mux_2_1_caseStatement(
    input a,
    input b,
    input s,
    output out
    );
	 reg out;
	 always @(*)
	 begin
		casex(s)
			1'b0: out = a;
			1'b1: out = b;
			default: out = 1'bx;
		endcase
	 end

endmodule
