#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i;
  for(i=0;i<5;i++)
    {
      printf("%d",rand());
      }
      return 0;
  }
  ----------------------------------------------------------------------
  int main()
  {
    int a=rand()%11;
    if(a<6)
    {
    printf("a \n");
    }
    elseif(a<7)
    {
    printf("b \n");
    }
    elseif(a<9);
    {
      printf("c\n");
      }
      else
      {
      printf("d\n");
      }
     return 0;
     }
