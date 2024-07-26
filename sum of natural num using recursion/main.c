/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+sum(n-1);
    }
    
}


int main()
{
    int n,sum=0,i=0;
    printf("Enter a Natural number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    {
    printf("%d",sum);
    }
    return 0;
    
}