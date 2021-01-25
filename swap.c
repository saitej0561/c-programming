the code which explains that swaping with out using the temp variable

#include<stdio.h>
void main()
{
  int a,b,sum;
  printf("enter the a , b  value\n");
  scanf("%d %d",&a,&b);
  printf("before swapping the value of a is %d , b is %d",a,b);
  sum=a+b;
  a=sum-a;
  b=sum-b;
  printf(after swapped the value of a is %d , b is %d",a,b);
}
