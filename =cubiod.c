#include <stdio.h>
int main()
{float l,b,h,sa;
printf("enter the length:");
scanf("%f",&l);
printf("enter the breadth:");
scanf ("%f",&b);
printf("enter the height:");
scanf("%f",&h);
sa=2*(l*b+l*h+b*h);
printf("the surface area of the given cuboid is%f",sa);
}
