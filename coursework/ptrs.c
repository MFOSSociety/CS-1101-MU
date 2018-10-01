#include <stdio.h>


void createMatrix(int *[][100],int *,int *);
void display(int *[][100],int *,int *);
int main()
{

    int a[100][100];
    int r,c;

    printf("Enter the number of rows in the given matrix:");
    scanf("%d",&r);
    printf("Enter the number of colums in the given matrix:");
    scanf("%d",&c);
    createMatrix(a,&r,&c);
    display(a,&r,&c);

    return 0;
}

void createMatrix(int *a[][100],int *r,int *c)
{
    int i,j,*ptr,row,col;
    ptr=a;
    row=*r;
    col=*c;
    printf("Enter values into matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(ptr + (i*col + j)));//*(ptr+(i*num of columns+j))
        }
    }

}

void display(int *a[][100],int *r,int *c)
{
    int i,j,*ptr,row,col;
    ptr=a;
    row=*r;
    col=*c;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",*(ptr + (i*col + j)));
        }
        printf("\n");
    }
}
