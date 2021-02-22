/* conversion of farh to cel */
#include<stdio.h>
void main()
{
	int cel,farh;
	int low,step,high;
	low=0;
	step=20;
	high=300;
	farh=low;
	while(farh<=high)
	{
		cel=5*(farh-32)/9;
		printf("%d\t %d\n",farh,cel);
		farh=farh+step;
	}
}
