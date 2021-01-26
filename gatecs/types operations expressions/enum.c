enumeration concept

#include<stdio.h>
enum week{ sun=1, mon,tues,wed,thus,fri,sat}
int main()
{
  int i;
  i=sun;
  while(i<=sat)
  {
    
    printf("%d",i);
    i++;
  }
  --------------------------or------------------------------
  {
    int i;
    for(i=sun;i<=sat;i++)
      {
        printf("%d",i);
       }return 0;
   }
