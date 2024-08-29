/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void rev();
int main()
{
    printf("enter a string: ");
    rev();
    return 0;
}
void rev()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        rev();
        printf("%c",c);
    }
}
