`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:36:17 04/04/2024 
// Design Name: 
// Module Name:    sequenceDetector 
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
module sequenceDetector(
    input [7:0]a,
    output reg d,
	 input clk
    );
	 reg [2:0]s = 0;
	 integer i=0;
	 always @(posedge clk)
	 begin
		case(s)
				2'b00:
					begin
					$monitor("Zero");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b01;
						else
							 s <= 2'b00;
					end
				2'b01:
					begin
					$monitor("First");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b01;
						else
							 s <= 2'b10;
					end
				2'b10:
					begin
					$monitor("Second");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b11;
						else
							 s <= 2'b00;
					end
				2'b11:
					begin
					$monitor("Third");
					#50
					 d = 1;
						if(a[i]==1) 
							 s <= 2'b01;
						else
							 s <= 2'b10;
					end
			endcase
			i = i+1;
	 end
	 

endmodule
/*
case(s)
				2'b00:
					begin
					$monitor("Zero");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b01;
						else
							 s <= 2'b00;
					end
				2'b01:
					begin
					$monitor("First");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b01;
						else
							 s <= 2'b10;
					end
				2'b10:
					begin
					$monitor("Second");
					#50
					d = 0;
						if(a[i]==1) 
							 s <= 2'b11;
						else
							 s <= 2'b00;
					end
				2'b11:
					begin
					$monitor("Third");
					#50
					 d = 1;
						if(a[i]==1) 
							 s <= 2'b10;
						else
							 s <= 2'b01;
					end
			endcase
			
			*/