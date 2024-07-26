/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void rev(int);
void main()
{
    int a;
    
    printf("enter the num to reverse");
    scanf("%d",&a);
    rev(a);
}
    

void rev(int a)
{
    int r,c;
    while(a!=0)
    {
        r=a%10;
        c=a/10;
        printf("%d",r);
        a=c;
    }
}