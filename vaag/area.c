#include<stdio.h>
#include<math.h>
void main()
{
	int s,a,b,c,area;
	printf("enter a,b,c values\n");
	scanf("%d \n %d \n %d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area is %d\n",area);
}

