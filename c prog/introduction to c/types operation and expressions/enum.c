#include<stdio.h>
enum week{mon=1 , tues , wed , thus , fri , sat, sun}
void main()
{
    int a;
    a=mon;
    printf("%d",mon);
    
    -------------------or-----------------------------
    int a;
    for(a=mon;a<sun;a++)
      {
        printf("%d",a);
       }
       
