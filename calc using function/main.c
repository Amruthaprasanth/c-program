/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void calculator();

int main()
{
    calculator();

    return 0;
}

void calculator()
{
    float a,b; 
    int ch,reenter;
    char c;

    do
    {
        printf("Enter 2 numbers:");
        scanf("%f %f",&a,&b);
        printf("\n1.Addition\n2.Differnce\n3.Multiplication\n4.Division\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Sum:%f",a+b);
                break;
            case 2:
                printf("Differnce:%f",a-b);
                break;
            case 3:
                printf("Product:%f",a*b);
                break;
            case 4:
                printf("Division:%f",a/b);
                break;
            default:
                printf("INVALID CHOICE");
        }
        printf("\nDo yo want to continue?(YES :Y , NO: ENTER ANY CHARECTER):");
        scanf("%d",&reenter);
        scanf("%c",&c);
    }
    while(c=='Y');


}

