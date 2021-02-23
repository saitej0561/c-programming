#include<stdio.h>
#include<math.h>
void main()
{
	int z,x,y;
	printf("enter x , y values\n");
	scanf("%d \n %d",&x,&y);
	z=pow(x,8)-pow(y,8);
	printf("z is %d\n",z);
}
