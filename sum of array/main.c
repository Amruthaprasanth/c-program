/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
int a[5],b[5],sum[5],i;
printf("enter elements of first array\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter elements of second array\n");
for(i=0;i<5;i++)
{
    scanf("%d",&b[i]);
}

for(i=0;i<5;i++)
{
    sum[i]=a[i]+b[i];

}

printf("sum of array\n");
for(i=0;i<5;i++)
{
    printf("%d\n",sum[i]);
}
}  
   
