/*
Author      : Mohan kumar
Synopsis    : "Calculates grades for five subjects."
How2Compile : gcc grad5.c -o grad5.out
Usage       : ./grad5.out
gcc version : 5.4.0
*/


#include<stdio.h>
int main()
{
	int maths,english,physics,chemistry,economics,percentage;
	printf ("enter marks in all 5 subjects\n");
	scanf("%d%d%d%d%d",&maths,&english,&physics,&chemistry,&economics);
	percentage=(maths+english+physics+chemistry+economics)/5;
	if(percentage>=90)
	{
	     printf("A grade\n");
    }
	else if(percentage>=80)
    {
		 printf("B grade\n");
	}
	else if(percentage>=60)
    {
		printf("C grade\n");
	}
	else if(percentage>=40)
    {
		printf("D grade\n");
	}
	else if(percentage>=30)
	{
		printf("E grade\n");
	}
	else
		printf("F grade\n");
	return 0;
}
