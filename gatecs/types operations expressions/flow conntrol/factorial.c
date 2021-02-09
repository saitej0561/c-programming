#include<stdio.h>
void main()
{
  int num,factorial=1,i
  printf("enter only +ve num");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
        factorial = factorial*i;
       }
   printf("factorial of %d is %d",num,factorial);
  }
