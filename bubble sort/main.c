/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int arr[]= {64, 34, 25, 12, 22, 11, 90};
  int n =7;
    int i,j,temp;
    printf("Unsorted array:\n");
    for (i =0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (i =0;i<n-1;i++) 
    {
        for (j =0;j<n-i-1;j++) {
            
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (i =0;i<n; i++) 
    {
        printf("%d ",arr[i]);
    }
  return 0;
}