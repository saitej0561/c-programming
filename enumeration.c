/*program which explains about enum concept 
it is used to readable of the program very easily*/

#include<stdio.h>
enum week{sun=1,mon,tues,wed,thus,fri,sat}
void main()
{
  int i;
  for(i=sun;i<=sat;i++)
    {
      printf("%d",i)
      }
 }
 
 -------------------oR-----------------------------------------
 
 printf("sunday=%d",sun);
 printf("sun=%d , mon=%d , tues = %d , wed =%d, thus= %d, fri= %d,sat=%d",sun,mon,tues,wed,thus,fri,sat);
 
