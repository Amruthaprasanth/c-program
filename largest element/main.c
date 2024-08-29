/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={2,3,13,10,4};
    int large,i;
    large=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>large)
        {
        large=a[i];
        }
    }
    printf("%d is the largest element",large);

    return 0;
}