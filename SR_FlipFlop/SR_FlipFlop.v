`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:52 04/06/2024 
// Design Name: 
// Module Name:    SR_FlipFlop 
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
module SR_FlipFlop(
    input s,
    input r,
    input clk,
    output reg q,
    output reg q_bar
    );
	 reg t1,t2;
	 always@(posedge clk) begin
		
			t1 = ~(s&clk);
			t2 = ~(r&clk);
			q = ~(q_bar&t1);
			q_bar = ~(q&t2);
		
	 end


endmodule
