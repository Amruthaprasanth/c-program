/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100],size,i,j,start,end,flag,temp,sch;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
     printf("\nEnter elments:");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter starting element:");
    scanf("%d",&start);
    printf("\nEnter ending element:");
    scanf("%d",&end);
    printf("Ascending order:\n");
     for(i=start;i<end;i++)
    {
        for(j=i+1;j<end;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=start;i<end;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("Element to search:");
    scanf("%d",&sch);

    for(i=start;i<end;i++)
    {
        if(arr[i]==sch)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("%d is present in the sorted array",sch);
    }
    else
    {
        printf("%d is not present in the sorted array",sch);
    }
  

    return 0;
}
   