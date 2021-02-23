#include<stdio.h>
void main()
{
	int sub1,sub2,sub3,avg,total;
	printf("enter the subject marks of the three students\n");
	scanf("%d \n %d \n %d",&sub1,&sub2,&sub3);
	total=sub1+sub2+sub3;
	avg=total/3;
	printf("total marks of the three subjects = %d\n",total);
	printf("avg marks of th three subjects = %d\n",avg);
}
