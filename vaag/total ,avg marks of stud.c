total and average marks of student of 3 subjects.c

#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total,avg;
    printf("enter the marks of 3 sub\n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("total marks of 3 subjects is %d ,, avg marks of 3 subjects is %d",total,avg);
    return 0;
}
