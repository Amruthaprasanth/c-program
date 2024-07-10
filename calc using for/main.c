/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1,number=0,limit;
    printf("enter a number:");
    scanf("%d",&number);
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
    printf("%d\n",(number*i));
    }

    return 0;
}