/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,length=0,sum=0,r,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
      temp=temp/10;
      length=length+1;
      
    }
    printf("length %d:",length);
    
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,length);
        n=n/10;
        length--;
    }
        printf(" sum:%d",sum);
        if(sum==temp){
            printf("%d is a dissarium");
        }
        else{
            printf("%d is not dissarium");

    return 0;
}