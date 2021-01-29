#include<stdio.h>
void main()
{
  int y,a,x,b,z,c;
  printf("enter a,x,b,z,c values");
  scanf("%d %d %d %d %d",&a,&x,&b,&z,&c);
  y=a*pow(x,8)-b*pow(z,2)-pow(c,3);
  printf("result y is %d",y);
  }
