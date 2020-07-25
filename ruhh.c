#include <stdio.h>
#include <conio.h>
int add(int p,int q);
int main()
{int a,b,c;

printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
c= add(a,b);

printf ("\n sum of %d and %d is %d",a,b,c);
getch();
return 0;
} 

int add(int p,int q)
{
	int result;
result=p+q;
return(result);
}
