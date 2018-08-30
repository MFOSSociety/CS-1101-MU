/*
Author      : Piyush Raj
Synopsis    : Prints days in a month by taking month number.
How2Compile : gcc days_in_month.c -o days_in_month.out
Usage       : ./days_in_month.out
gcc version : 5.4.0
*/

#include  <stdio.h>

void main()
{
    int month =0; //initialized
    printf("Enter the Month Number : ");
    scanf("%d", &month); //read the input, store it in month variable.
    if (month = 1)
    {
        printf("Janurary, 31 Days.");
    }
    else if (month = 2)
    {
        printf("February, 28 Days.");
    }
    else if (month = 3)
    {
        printf("March, 31 Days.");
    }
    else if (month = 4)
    {
        printf("April, 30 Days.");
    }            
               
    else if (month = 5)
    {
        printf("May, 31 Days.");
    }        
    else if (month = 6)
    {
        printf("June, 30 Days.");
    }         
    else if (month = 7)
    {
        printf("July, 31 Days.");
    }               
               
    else if (month = 8)
    {
        printf("August, 31 Days.");
    }               
    else if (month = 9)
    {
        printf("September, 30 Days.");
    }           
    else if (month = 10)
    {
        printf("October, 31 Days.");
    }               
               
    else if (month = 11)
    {
        printf("November, 30 Days.");
    }               
               
    else if (month = 12)
    {
        printf("December, 31 Days.");
    }
    else
    {
        printf("Wrong input. \n Try between [1-12].");
    }
}