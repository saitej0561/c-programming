using ternary operator max of 3 numbers.c

#include<stdio.h>
void main()
{
  int a,b,c,max,min;
  printf("enter the a,b,c values\n");
  scanf("%d %d %d",&a,&b,&c);
  max=(a>b?((a>c)?a:c):((b>c)?b:c));
  min=(a<b?((a<c)?a:c):((b<c)?b:c));
  printf("maximum of three numbers is %d",max);
  printf("minimum of three numbers is %d",min);
 }
