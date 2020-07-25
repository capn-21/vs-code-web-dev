#include <stdio.h>
void main()
{int a,b,c;
printf("enter the first number ");
scanf("%d",&a);
printf ("enter the secon number ");
scanf("%d",&b);
printf ("enter the third number ");
scanf("%d",&c);
if(a>b&&a>c)
	printf("%d is greatest number",a);
	else if(b>c)
		printf ("%d is the greatest number",b);
			else
				printf("%d is the greater number",c);
	

}


