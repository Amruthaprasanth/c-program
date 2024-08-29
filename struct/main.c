/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
    struct employee
    {
    int id;
    char name[50];
    float salary;
}
e1,e2;
int main()
{
    e1.id=101;
    strcpy(e1.name,"sonoo");
    e1.salary=2000;

 e2.id=102;
    strcpy(e2.name,"onoo");
    e2.salary=3000;

printf("employee 1 id:%d\n",e1.id);
printf("employee 1 name:%s\n",e1.name);
printf("employee 1 salary:%.2f\n",e1.salary);
printf("employee 2 id:%d\n",e2.id);
printf("employee 2 name:%s\n",e2.name);
printf("employee 2 salary:%.2f\n",e2.salary);

return 0;
}
    
    
   