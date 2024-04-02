`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:51:45 04/03/2024 
// Design Name: 
// Module Name:    fullSubtractor 
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
module fullSubtractor(
    input a,
    input b,
    input bor_in,
    output diff,
    output bor_out
    );
	 assign diff = (a^b^bor_in);
	 assign bor_out =(~a&b)|((~a^b)&bor_in);


endmodule
