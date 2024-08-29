/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int arr[5]={1,5,4,3,2};
    int i,j,temp;
    
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
        }
    }
    printf("ascending order List:\n");
    for(i = 0; i<5; i++)
    {
    printf("%d\n",arr[i]);
    }
} 
