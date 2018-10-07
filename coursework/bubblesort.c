/* Bubble sort algorithm */
 
#include <stdio.h>
 
int main()
{
  int array[100], n, i, j, temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i= 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);
 
  return 0;
}
