`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:24:44 04/04/2024 
// Design Name: 
// Module Name:    fourBitSub 
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
module fourBitSub(
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    input b_in,
    output b_out
    );
	 
	 FourBitAdder first(a,~b,1,{b_out,sum});

endmodule
module FourBitAdder(
    input [3:0]a,
    input [3:0]b,
    input cin,
    output [4:0]sum
    );
	 wire [2:0]c;
	 fullAdder first(a[0],b[0],cin,sum[0],c[0]);
	 fullAdder second(a[1],b[1],c[0],sum[1],c[1]);
	 fullAdder third(a[2],b[2],c[1],sum[2],c[2]);
	 fullAdder fourth(a[3],b[3],c[2],sum[3],sum[4]);
endmodule
module fullAdder(
    input a,
    input b,
    input cin,
    output sum,
    output carry
    );
	 reg sum , carry;
	 always @(*)
	 begin
		sum = (a^b^cin);
		carry = (a&b)|((a^b)&cin);
	 end


endmodule

