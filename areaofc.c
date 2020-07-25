#include <stdio.h>
int main()
{
float pi=3.14,r,h,area;
printf ("enter the radius");
scanf ("%f",&r);
printf("enter the height");
scanf("%f",&h);
area=2*pi*r*h+2*pi*r*r;
printf("the area of the cylinder is %f",area);
}

