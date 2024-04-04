`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:18:13 04/05/2024 
// Design Name: 
// Module Name:    demux_1x2_ifElse 
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
module demux_1x2_ifElse(
	 input i,
    input s,
    output reg out1,
    output reg out2
    );
	 
	 always @(*)
	 begin
		if(s) begin 
			out1 = 0;
			out2 = i;
		end
		else begin
			out1 = i;
			out2 = 0;
		end
	 end


endmodule
