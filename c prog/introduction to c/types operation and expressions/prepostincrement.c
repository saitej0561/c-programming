#include<stdio.h>
void main()
{
	int a=2;
	int b;
	b=a++;
	printf("post increment reults are a =%d \t b = %d\n",a,b);
	b=++a;
	printf("pre increment results are a=%d\t b = %d\n",a,b);
}
