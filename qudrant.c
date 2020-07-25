#include <stdio.h>
int main()
{int co1,co2;
printf("enter the x coordinate");
scanf("%d",&co1);
printf("enter the y coordinate ");
scanf("%d",&co2);

	if( co1 > 0 && co2 > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",co1,co2);
	else if( co1 > 0 && co2 < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",co1,co2);
	else if( co1 == 0 && co2 == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",co1,co2);

}
