#include<stdio.h>
int main()
{
	int farh,cel;
	cel=0;
	while(cel<=300)
	{
		farh=(9*cel)/5+32;
		printf("%d\t %d\n",cel,farh);
		cel+=20;
	}
	return 1;
}
