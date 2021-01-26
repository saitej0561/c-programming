using ternary in place of if condition

#include<stdio.h>
void main()
{
  int num;
  printf("enter the num");
  scanf("%d",&num);
  (num%2==0)?printf("%d is even",num):printf("%d is odd",num);
 }
