/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c,f;
    printf("enter temperature in farenheit: \n");
    scanf("%f",&f);
    c=(f-32)*5 / 9;
    printf("%fc",c);

    return 0;
}