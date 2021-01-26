bit wise operator are and [&]  or [|] exclusive or [^] bitwise not[~] , leftshift <<  , right shift >>

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a, b values");
    scanf("%d %d",&a,&b);
    printf("a & b is %b & %b = %b ",a,b,a&b);
    printf("a | b is %b | %b = %b",a,b,a|b);
    printf("a ^ b is %b ^ %b  = %b",a,b,a^b);
    printf("~a is ~%b is %b",a,~a);
    printf("left shift %d<<2 is %d",a,a<<2);
    printf("right shift %d>>2 is %d",a,a>>2);
    return 0;
 }
