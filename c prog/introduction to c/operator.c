#include<stdio.h>
int main()
{
	int a=1,b=2;
	int c;
	c=(!(a<b));
	printf("c is going to print as false %d such that 1<2 \n",c);
	int d;
	d=a<b;
	printf("1<2 is true %d\n",d);
	return 0;
}
