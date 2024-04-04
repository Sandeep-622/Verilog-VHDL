`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:06:50 04/05/2024 
// Design Name: 
// Module Name:    demux_1x2_caseStatement 
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
module demux_1x2_caseStatement(
	 input i,
    input s,
    output reg out1,
    output reg out2
    );
	 always @(*)
	 begin
		case(s)
		1'b0: begin out1 = i; out2 = 0; end
		1'b1: begin out2 = i; out1 = 0; end
		default: {out1,out2} = 2'bxx;
		endcase
	 end


endmodule
