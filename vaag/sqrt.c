// c program d = b2-4ac;
#include<stdio.h>
void main()
{
	int d,b,a,c;
	printf("enter b , a, c values\n");
	scanf("%d \n %d \n %d",&b,&a,&c);
	d=b*b-4*a*c;
	printf("d = %d\n",d);
}
