
#include <stdio.h>

int main()
{
    int num1,num2,sum,mul;
    printf("enter a number:");
    scanf("%d%d",&num1,&num2);
    if(num1>0&&num2>0)
    {
        if(num1%2==0 && num2%2==0)
        {
            sum=num1+num2;
            printf("SUM:%d",sum);
        }
        else
        {
            mul=num1*num2;
            printf("PRODUCT:%d",mul);    
        }
    }
    

    return 0;
}
