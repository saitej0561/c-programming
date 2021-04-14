#include<stdio.h>
int main()
{
	int c=0;
	for(c=0;getchar()!=EOF;c++);
	printf("%d",c);
return 0;
}
