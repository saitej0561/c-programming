#include<stdio.h>
void main()
  {
   char operator;
   int a,b;
   printf("enter the a,b value\n");
   scanf("%d %d ",&a,&b);
   printf("enter the operator\n");
   scanf("%c",&operator);
   switch(operator)
    {
      case '+':printf("add is a+b is %d",a+b);break;
      case '-': printf("sub is a-b is %d",a-b);break;
      case '*':printf("mul is a*b is %d",a*b);break;
      case '/':printf("div is a/b is %d",a/b);break;
      case '%':printf("mod is a%b is %d",a%b);break;
      default: printf("invalid operator");
    }
   }
