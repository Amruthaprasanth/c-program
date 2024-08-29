/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 void main () 
 { 
char s[11] = "javatpoint"; 
int i = 0; 
int count = 0; 
     while(s[i]!='\0') 
        { 
            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o') 
    { 
        count ++; 
    } 
        i++; 
 } 
        printf("The number of vowels %d",count); 
 }
