/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void armstrong(int);
void prime(int);
void main()
 {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
 }

void prime(int n )
{
int prime=0;
  for (int i=2;i<=n/2;i++)
    {
        
      if(n%i==0)
        {
         prime=1;
         break;
        }
 }         
if(prime==0)
    {
    printf("%d is  a prime number\n",n);
    }
else
 {
   printf("%d is not prime number\n",n);
 }
}


void armstrong(int num)
{
int length=0,sum,e,r,temp;
e=num;
temp=num;
while(num!=0)
{
num=num/10;
length++;
}
printf("%dlength\n",length);
while(temp>0)
{
r=temp%10;
sum=sum+pow(r,length);
temp=temp/10;
}
printf("%dsum is\n",sum);
if(sum==e)
{
printf("%d the number is Armstrong\n",e);
}
else
{
printf("%d the number is not Armstrong",e);
}
}


