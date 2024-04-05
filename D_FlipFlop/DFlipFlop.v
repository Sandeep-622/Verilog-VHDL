`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:31:21 04/06/2024 
// Design Name: 
// Module Name:    DFlipFlop 
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
module DFlipFlop(
    input d,
    input clk,
    input clear,
    input preset,
    output reg q,q_bar
    );
	 always @(posedge clk or negedge clear or negedge preset)
	 begin
		if (clear==0) 
		begin 
		q <= 0; 
		q_bar <= 1; 
		end
		
		else if (preset==0) 
		begin 
		q <= 1;
		q_bar <= 0;
		end
		
		else
		begin 
		q<=d;
		q_bar<=~d;
		end 
		
		
	 end

endmodule
