/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,r1,r2;
    printf("enter values:");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b - 4*a*c;
    if(d>0)
    {
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("%.1f %.1f",r1,r2);
    }
    else if(d==0)
    {
    r1=-b/(2*a);
    printf("%.1f two equal roots",r1);
    }
    else
    {
    printf("no equal roots exists");
    }
    

    return 0;
}