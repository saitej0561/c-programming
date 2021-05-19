#include<stdio.h>
int main()
{
	int farh;
	for(farh=300;0<=farh;farh=farh-20)
	{
		printf("%d\t%d\n",farh,(5*(farh-32)/9));
	}
	return 0;
}
