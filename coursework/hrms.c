/*
Author      : Mohan kumar
Synopsis    : "Calculates hours in min &sec"
How2Compile : gcc hrms.c -o hrms.out
Usage       : ./hrms.out
gcc version : 5.4.0
*/

#include<stdio.h>
int main()
{
	int hours,minutes,seconds;
	printf("Enter time in hours\n");
	scanf ("%d",&hours);
	minutes=hours*60;
	seconds=minutes*60;
	printf("\n%dhours is %d minutes",hours,minutes);
	printf("\n%dhours is %dseconds",hours,seconds);
    return 0;
}
