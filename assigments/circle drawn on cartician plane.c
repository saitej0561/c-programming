 C program to check whether a circle can be drwan through
 three given points on the Cartesian plane
 
 #include<stdio.h>
void main()
{ 
  int x1,y1;
  int x2,y2;
  int x3,y3;
  int slope a,slope b;
  printf("enter the x1,y1 values");
  scanf("%d %d",&x1,&x2);
  printf("enter the x2,y2 values");
  scanf("%d %d",&x2,&y2);
  printf("enter the x3,y3 values");
  scanf("%d %d",&x3,&y3);
  slope a=y2-y1/x2-x1;
  slope b=y3-y1/x3-x1;
  if(slope a==slope b)
  {
  printf(yes);
  }
  else
    {
      printf("no");
      
    }
}
