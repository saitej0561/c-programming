#include<stdio.h>
int main()
{
	int previous,current,count=1,new;
	printf("enter the previous ,current values\n");
	scanf("%d %d",&previous,&current);
	if(previous<current)
	{
		while(previous<current)
		{
			scanf("%d",&new);
			previous =current;
			current=new;
			count++;
		}
	
	}
	printf("provided list in incresing order %d",count);

	return 0;
}
