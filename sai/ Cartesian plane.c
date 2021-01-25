#include<stdio.h>
int main()
{
  int x1,y1;
  int x2,y2;
  int x3,y3;
  int side;
  printf("enter the x1,y1 value");
  scanf("%d %d",&x1,&x2);
  printf("enter the x2,y2 values");
  scanf("%d %d",&x2,&y2);
  scanf("%d %d",&x3,&y3);
  printf("center of inner circle is %d , %d ",(x1+x2+x3)/3,(y1+y2+y3)/3);
  side=(sqrt(x1-x2)*(x--x2)+(y1-y2)*(y1-y2));
  printf("area of inner circle is %d",sqrt((3*side)/6));
  return 0;
}
