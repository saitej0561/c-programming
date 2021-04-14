#include<stdio.h>
void main()
{
	int i;
	int num;
	scanf("%d",&num);
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
