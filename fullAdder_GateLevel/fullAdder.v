`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:08 04/02/2024 
// Design Name: 
// Module Name:    fullAdder 
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
module fullAdder(
    input a,
    input b,
    input c_in,
    output sum,
    output carry
    );
	 wire t1,t2,t3;
	 xor(sum,a,b,c_in);
	 xor(t3,a,b);
	 and(t1,a,b);
	 and(t2,c_in,t3);
	 or(carry,t1,t2);

endmodule
