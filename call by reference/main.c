/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void change(int *num)
{
    printf("before adding value inside function num=%d\n",*num);
    (*num)+=100;
    printf("After adding value inside function num=%d\n",*num);
}
int main()
{
    int x=100;
    printf("Before function call x=%d\n",x);
    change(&x);
    printf("after function call x=%d\n",x);
    return 0;
}