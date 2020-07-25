#include <stdio.h>
int main()
{int x,y;
	printf("enter the x coordinate \n");
	scanf("%d",&x);
	printf("enter the y coordinate \n");
	scanf("%d",&y);

if (x>0&&y>0)
printf("quad frst:");
else if(x<0&&y>0)
printf("quad sec:");
else if (x<0&&y<0)
printf("quad thr:");
else if(x>0&&y<0)
printf("quad fourth:");
else if(x==0&&y==0)
printf("the points lies on the origin");
}
