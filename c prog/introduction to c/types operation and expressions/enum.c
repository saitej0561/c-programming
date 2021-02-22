#include<stdio.h>
enum week{ sun=1, mon , tues , wed , thus , fri , sat };
void main()
{
	int day;
        day=mon;
	printf("monday is %d\n",day);
	for(day=sun;day<=sat;day++)
	{
		printf("%d\n",day);
	}
}
