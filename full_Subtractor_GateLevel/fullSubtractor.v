`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:22:51 04/03/2024 
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
	 wire t1,t2,t3;
	 xor(diff,a,b,bor_in);
	 xor(t1,~a,b);
	 and(t2,t1,bor_in);
	 and(t3,~a,b);
	 or(bor_out,t2,t3);

endmodule
