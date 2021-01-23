A square is made by bending a single piece of wire.  If we make a circle out of this wire, what will be radius and area of the circle

pi = 3.14

radius and area of a circle

#include<stdio.h>
#define pi 3.14
void main()
{
int lenght,area,radius;  /* lenghth of one side of a square*/
printf("enter the length of wire\n");
scanf("%d",&length);
radius = (2*length)/pi;
area = (4*length*length)/pi;
printf("radius of circle =%d\n",radius);
printf("area of circle = %d\n", area);
}
