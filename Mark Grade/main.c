
#include <stdio.h>

int main()

{
    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);
    if(mark>90&&mark<=100)
    {
        printf("A");
    }
    else if(mark>80&&mark<=90)
    {
    printf("B");
    }
     else if(mark>70&&mark<=80)
    {
    printf("C");
    }
      else if(mark>60&&mark<=70)
    {
    printf("D");
    }
     else if(mark>100)
    {
    printf("you entered invalid mark");
    }
    else
    {
        printf("failed");
    }
  
  

    return 0;
}
