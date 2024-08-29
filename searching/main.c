/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5},i,b,value;
    printf("Enter the number to found: ");
    scanf("%d",&b);
    
    for(i=0;i<5;i++)
    {
        if(a[i]==b)
        {
            printf("%d element found in the array.",b);
            value==1;
        }
    }
    if(value=0)
    {
        printf("%d elment not found",b);
    }
    
return 0;
}