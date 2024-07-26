/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n>0)
    {
        printf("%d is a positive number:",n);
    }
    else if(n<0)
    {
         printf("%d is a negative number:",n);
    }
    else
    {
         printf("%d is zero",n);
    }

    return 0;
}