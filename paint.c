#include <stdio.h>
int main ()
{
	float r,h,n,p,ta,aos,acc,pi=3.14;
	printf("enter the radius of the cylinder:");
	scanf("%f",r);
	peintf("enter the height of the cylinder:");
	scanf("%f",h);
	printf("enter the number of tanks:");
	scanf("%f",n);
	printf("enter the painting price:");
	scanf("%f",p);
	aoc=2*pi*r*h;
	acc=pi*r*r;
	ta=n*(aoc+acc);
	printf("the total cost for painting the tanks is %f ",ta);
	
}


