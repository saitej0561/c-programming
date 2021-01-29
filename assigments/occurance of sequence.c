Write a program that reads a sequence of 10 integers (which can only be 0 or 1),
and counts the number of occurrences of the sequence "0100". Note that overlapped
sequences are allowed. DO NOT USE LOOPS.
 input : the ten integers

#include<stdio.h>
int main()
{
  int count=0;
  int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
  printf("enter the values \n");
  scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
  if(a1==0 && a2==1 && a3==0  && a4==0)
  {
    count++;
    }
    if(a2==0 && a3==1 && a4==0  && a5==0)
  {
    count++;
    }
    if(a3==0 && a4==1 && a5==0  && a6==0)
  {
    count++;
    }
    if(a4==0 && a5==1 && a6==0  && a7==0)
  {
    count++;
    }
    if(a5==0 && a6==1 && a7==0  && a8==0)
  {
    count++;
    }
    if(a6==0 && a7==1 && a8==0  && a9==0)
  {
    count++;
    }
    if(a7==0 && a8==1 && a9==0  && a10==0)
  {
    count++;
    }
    printf("number of times 0100 is repeated is %d",count);
    return 0;
    }
