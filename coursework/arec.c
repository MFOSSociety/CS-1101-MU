/*
Author      : Mohan kumar
Synopsis    : "Finds out the area of a circle"
How2Compile : gcc arec.c -o arec.out
Usage       : ./arec.out
gcc version : 5.4.0
*/

#include<stdio.h>
int main()
{
	float r,a;
	printf ("Enter radius of circle\n");
	scanf ("%f",&r);
	a = 3.141*r*r;
    getch();
	printf("Area of circle%f\n",a);
}
