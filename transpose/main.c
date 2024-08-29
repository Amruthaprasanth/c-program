/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[2][3],i,j,n;
    printf("enter the elements:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    printf("transpose of the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&arr[j][i]);
        }
    }
        printf("\n");

    return 0;
}