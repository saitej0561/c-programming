#include<stdio.h>
void main()
  {
    int age,num;
    printf("enter the age\n");
    scanf("%d",&age);
    (age>=18)?printf("major = %d",age):printf("minor =%d",age);
    printf("enter num");
    scanf("%d",&num);
    (num<0)?printf("positive is %d",num):printf("negative is %d",num);
   }
