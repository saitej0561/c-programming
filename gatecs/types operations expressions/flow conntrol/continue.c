#include<stdio.h>
void main()
  {
      int i,sum=0,num;
      for(i=0;i<15;i++)
        {
          printf("enter the num");
          scanf("%d",&num);
          if(num<0)
                 {
                  continue;
                  }
           sum=sum+num;
           }
        printf("sum is %d",sum);
   }
