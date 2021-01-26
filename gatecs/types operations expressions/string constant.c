string constant.c

#include<stdio.h>
void main()
{ 
  printf("saitej\n");
  char c;
  int result;
  printf("enter the char");
  scanf("%c",&c);
  result=c+10;
  printf("result is %d",result);
  OR  (printf("result is %d,'a'+61);)
  
 }
 
 to count the char we have a function
 
 int stringlength(char s[])
 {
    int i=0;
    while(s[i]!='\0')
      {
        i++;
        }return i;
 }
  
  
