/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=5;
    
    for(i=0;i<=n;i++)
    {
         char a='A';
        for(j=0;j<i;j++)
        {
        printf("%c ",a);
        a++;
        }
    
    printf("\n");
    }
return 0;
}