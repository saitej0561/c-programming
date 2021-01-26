constants.c

#include<stdio.h>
#define pi 3.14
int main()
{ 
    float result;
    result = pi;
    printf("the value of pi is %f",result);
    
 return 0;
 }
 
 -----------------------------------------or=======================================
 
int main()
{
  const float pi = 3.14;
  printf("the value of pi is %d",pi);
  return 0;
 }
