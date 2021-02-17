c prog for cal total , avg marks of three sub of the stud.

#include<stdio.h>
void main()
{
  int sub1,sub2,sub3,avg,total;
  printf("enter the sub marks");
  scanf("%d %d %d",&sub1,&sub2,&sub3);
  total=sub1+sub2+sub3;
  avg = total/3;
  printf("total marks of three subjects are %d",total);
  printf("avg of three sub are %d",avg);
 }
