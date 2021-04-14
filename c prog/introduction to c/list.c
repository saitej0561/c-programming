#include<stdio.h>
int main()
{
	int prev,cur,len=0;
	printf("enter the prev values\n");
	scanf("%d",&prev);
	if(prev!=-1)
	{
		len++;
	}
	printf("enter curr value\n");
	scanf("%d",&cur);
	while(cur!=-1)
	{
		if(prev<cur)
		{
			len++;
		}
		else
		{
			len=1;
		}
		prev=cur;
		scanf("%d",&cur);
	}
	printf("%d",len);
}
