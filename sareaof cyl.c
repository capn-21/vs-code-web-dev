#include <stdio.h>
 int main()
{
	
	float sa,vc,r,h,pi=3.14;
	printf ("enter the radius of the cylinder :");
	scanf("%f",&r);
	printf("enter the height of the cylinder :");
	scanf("%f",&h);
	sa=2*pi*r*h+2*pi*(r*r);
    vc=pi*r*r*h;
	printf("the surface area of the cylinder is %f and its volume is %f",sa,vc);
	
}

