/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int armstrong(int num,int count)
{
    int n,rem,quo,p,po;
    n=num;

    if(n!=0){
        rem=n%10;
        quo=n/10;
        p=pow(rem,count);
        return p+armstrong(quo,count);
    }
    else{
        return 0;
    }

}
int main()
{
    int num,a,r=0,q=0,count=0,ans;
    printf("Enter the number to check whether it is armstrong: ");
    scanf("%d",&num);
    a=num;

    while(a!=0){
        r=a%10;
        q=a/10;
        count++;
        a=q;
    }

    ans=armstrong(num,count);
    if(num==0){
        printf("%d is not an armstrong number",num);
    }
    else if(num==ans){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;
}
