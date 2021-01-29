  #include<stdio.h>
  void main()
  {
    int area,s,a,b,c;
    printf("enter s,a,b,c values\n");
    scanf("%d %d %d %d",&s,&a,&b,&c);
    area=(sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("area is %d",area);
    }
