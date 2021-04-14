#include<stdio.h>
enum week{sun=1 , mon , tues , wed , thus , fri , sat };
int main()
{
	int day;
	day =sun;
	while(day<=sat)
	{

	printf("%d\n",day);
	day++;
	}
	return 0;

}
