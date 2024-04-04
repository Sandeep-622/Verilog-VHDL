`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:48:51 04/04/2024 
// Design Name: 
// Module Name:    mux_2_1_IfElse 
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
module mux_2_1_IfElse(
    input a,
    input b,
    input s,
    output out
    );
	 reg out;
	 always @(*)
	 begin
		if (s) out = b;
		else out = a;
	 end

endmodule
