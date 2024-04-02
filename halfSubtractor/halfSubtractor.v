`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:24:57 04/03/2024 
// Design Name: 
// Module Name:    halfSubtractor 
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
module halfSubtractor(
    input a,
    input b,
    output diff,
    output borrow
    );
	 xor(diff,a,b);
	 and(borrow,~a,b);

endmodule
