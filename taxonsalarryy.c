#include <stdio.h>
int main()
{ int s;
	printf ("enter the anuaal salary:");
	scanf("%d",&s);
	if (s<150000)
	{printf("no tax applied");}
	else if (s<300000)
	{printf ("20 percent of tax applied");}
	else
	{printf("30 percent of salary to be applied");
	}
	} 

