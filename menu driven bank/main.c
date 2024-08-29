/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
struct bank
{
    char name[100];
    int age;
    char place[100];
    long int phone;
    float balance;
};
void create(struct bank cust[]) 
{
    int i=0,j,temp;
    
        printf("Customer details :\n");
        printf("Enter Name:");
        scanf("%s",cust[i].name);
        printf("Enter Age:");
        scanf("%d",&cust[i].age);
        printf("Enter Place:");
        scanf("%s",cust[i].place);
        printf("Enter Phone Number:");
        scanf("%ld",&cust[i].phone);
        temp = i;
        for(j=0;j<100;j++)
        {
            if(j!=temp && cust[j].phone==cust[temp].phone) 
            {
                printf("Phone number already exists,\n enter a different phone number : ");
                scanf("%ld",&cust[temp].phone);
                }
        }
        printf("Enter Initial Amount:");
        scanf("%f",&cust[i].balance);
        printf("\n");
        i=i+1;
}
int display(struct bank cust[]) 
{
    int i,count;
    long int phone;
    printf("phone number:");
    scanf("%ld",&phone);
  

    for(i=0;i<100;i++) 
    {
        if(cust[i].phone==phone) 
        {
            printf("Customer %d\n",i);
            printf("Name:%s\n",cust[i].name);
            printf("Age:%d\n",cust[i].age);
            printf("Place:%s\n",cust[i].place);
            printf("Phone:%ld\n",cust[i].phone);
            printf("Balance:%.2f\n",cust[i].balance);
        }
    }
}
int deposit(struct bank cust[])
{
    int i;
    long int phone;
    float deposit_amnt;
    printf("Enter phone number:");
    scanf("%ld",&phone);
    for(i=0; i<100;i++)
    {
        if(cust[i].phone==phone) 
        {
            printf("Enter the amount to deposit:");
            scanf("%f",&deposit_amnt);
            cust[i].balance=cust[i].balance+deposit_amnt;
            printf("Current bank balance after deposit:%.2f\n\n",cust[i].balance);
        }
    }
}
int withdraw(struct bank cust[]) 
{
    int i;
    long int phone;
    float withdraw_amt;
    printf("Enter phone number:");
    scanf("%ld", &phone);
    for(i = 0; i<100; i++) 
    {
        if(cust[i].phone==phone) 
        {
            printf("Enter the amount to withdraw:");
            scanf("%f", &withdraw_amt);
            if(cust[i].balance < 2000) 
            {
                printf("Insufficient balance\n");
            } else 
            {
                cust[i].balance=cust[i].balance-withdraw_amt;
                printf("Current bank balance after withdrawal: %.2f\n\n", cust[i].balance);
            }
        }
        else
        {
            printf("\nThe account does not exist\n");
        }
    }
}
int main()
{
    
    struct bank customer[100];
    int ch;
    char continue_choice='Y';
    while (continue_choice=='Y')
    {
        printf("1.create\n2.display\n3.deposit\n4.withdraw\n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:
                create(customer);
                break;
            case 2:
                display(customer);
                break;
            case 3:
                deposit(customer);
                break;
            case 4:
                withdraw(customer);
                   break;
            case 5:
                printf("exit\n");
                break;
            default:
                printf("invalid choice\n");
        }
}
    return 0;
}
