#include<stdio.h>
int main()
{
	int *p;
	int b;
	p=&b;
	printf("address of  a  is %u\n",*p);
	printf("size of pointer is %lu bytes\n",sizeof(*p));
	return 0;
}
