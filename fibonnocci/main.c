/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fibonacci(int f1,int f2,int n)
{
   int  f3;
   if(n>2)
   {
    //  printf("%d", f3);
     f3 = f1+f2;
     f1 = f2;
     f2 = f3;
     printf("%d\n", f3);
     return fibonacci(f1,f2,n-1);
   }
   
}

int main()
{
   int n,f1=0,f2=1;

   printf("Enter number: ");
   scanf("%d", &n);
  
   printf("The fibonacci series is: \n");
    printf("%d\n",f1);
    printf("%d\n",f2);

   fibonacci(f1,f2,n);
   return 0;

}