// c program perimeter of circle is p= 2 pi r;
#include<stdio.h>
void main()
{
	int perimeter,radius;
	float pi=3.14;
	printf("enter radius\n");
	scanf("%d",&radius);
	perimeter=2*pi*radius;
	printf("perimeter of circle = %d\n",perimeter);
}

