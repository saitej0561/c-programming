. Calculate and print
 (i) n-th term of a arithmetic series and
 (ii) sum up to n-th term.

 input : first term, common difference, value of n
 output: n<integer>-th term is: <term>
 sum up to n<integer>-th term is: <sum
 #include<stdio.h>
 void main()
{
    int a,n,d,nth,sumofnth;
    printf("enter the a, n ,d values\n");
    scanf("%d %d %d",&a,&n,&d);
    nth=a+(n-1)*d; // formula is a+n-1*d
    printf("nth of ap result is %d",nth);
    sumofnth = n/2*(2*(nth));  // formula is n/2(2*a+n-1*d)
    printf("sumofth is %d",nth);
   }
