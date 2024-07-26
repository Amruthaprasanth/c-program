/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void prime(int);
void main()

{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    prime(num);
    
}
void prime(int num )
{
int prime=0;
    for (int i=2;i<=num/2;i++)
    {
            if(num%i==0)
        {
           prime==1;
           break;
        }
        
    }
    if(prime==0)
    {
    printf("%d is a prime number");
    }
    else
    {
        printf("%d is not a prime number");
    }
}