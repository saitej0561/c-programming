#include<stdio.h>
int main()
{
	printf("\t \t ***** temperature conversion program ****\n");
	int farh,cel;
	farh=0;
	while(farh<=300)
	{
		cel=5*(farh-32)/9;
		printf("%d\t %d\n",farh,cel);
		farh+=20;
	}
	return 0;
}
