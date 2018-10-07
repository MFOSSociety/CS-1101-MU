/*
Author      : Mohan kumar
Synopsis    : "Distance between two point"
How2Compile : gcc dis2p.c -o dis2p.out
Usage       : ./dis2p.out
gcc version : 5.4.0
*/

#include<stdio.h>
#include<math.h>

int main()
{
	float x1, y1, x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
              printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}
