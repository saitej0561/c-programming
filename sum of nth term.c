program cal and prints sum of nth term

#include<stdio.h>
int main()
{
int a,n,d,sumofnth,nthterm;
printf("enter a , n , d values\n");
scanf("%d %d %d",&a,&n,&d);
nthterm = a+(n-1)*d;
sumofnth = (n*(a+nthterm))/2;
printf("sum of nth term is %d",sumofnth);
return 0;
}
