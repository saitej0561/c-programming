calculates and prints the nth term of a arithematic series

#include<stdio.h>
void main()
{
int a,n,d,nthterm;  // a is first term  ,,  n is nth terms ,,  d is common difference  //
printf("enter the a , n , d values\n");
scanf("%d%d%d",&a,&n,&d);
nthterm = a+(n-1)*d;
printf("nth term of airthematic series is %d", nthterm");
}
