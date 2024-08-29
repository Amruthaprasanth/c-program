/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a[5]={2,12,5,10,8};
     int max,min,i;
     for(i=0;i<5;i++)
     {
         scanf("%d",&a[i]);
     }
     max=a[0];
     min=a[0];
     for(i=1;i<6;i++)
     {
         if(max<a[i])
         max=a[i];
         if(min>a[i])
         min=a[i];
     }
    printf("%d is the max element",max);
    printf("%d is the min element",min);

    return 0;
}
