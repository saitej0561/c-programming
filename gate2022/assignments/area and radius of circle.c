A square is made by bending a single piece of wire.
If we make a circle out of this wire, what will be radius and area of the circle?
Assume the value of "pi" to be 3.14.
 input: length of one side of the square
 output: Radius of the circle is:
 Area of the circle is
 
 
 #include<stdio.h>
 void main()
 {
  float pi=3.14;
  flaot length;
  printf("enter length of the wire");
  scanf("%f",&lenth);
  printf("radius of the circle is %f\n",2*lenth/pi);
  printf("area of the circle is %f\n",4*length*lenth/pi);
 }
