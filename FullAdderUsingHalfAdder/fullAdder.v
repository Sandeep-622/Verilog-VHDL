`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:17:49 04/03/2024 
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
    input cin,
    output sum,
    output carry
    );
	 wire t1,c1;
	 halfAdder first(a,b,t1,c1);
	 halfAdder second(t1,cin,sum,c2);
	 or(carry,c1,c2);

endmodule

module halfAdder(
    input a,
    input b,
    output sum ,
    output carry
    );
	xor(sum,a,b);
	and(carry,a,b);
endmodule
