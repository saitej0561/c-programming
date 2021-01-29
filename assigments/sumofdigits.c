Write a C program to find the sum of digits of a positive integer.
Note that the positive integer can have any value within the allowed range
of positive integers on your computer.
Example- If number is 12345 then sum is 1+2+3+4+5=10

 input: the number
 output: the sum of digits of the number
 
 #include<stdio.h>
 void main()
 {
  int num,sum=0;
  printf("enter postive numbers\n");
  scanf("%d",&num);
  while(num!=0)
      {
      sum=sum+(num%10);
      num=num/10;
      }
    printf("sum of numbers is %d",sum);
    }
