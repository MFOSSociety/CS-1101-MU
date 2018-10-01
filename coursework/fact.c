#include<stdio.h>
int main()
{
    int a,f,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    f=1;
    i=1;
    while(i<=a)
    {
        f = f + i;
        i++;
    }
    printf("cyclic sum: %d",f);
    return 0; 
}
