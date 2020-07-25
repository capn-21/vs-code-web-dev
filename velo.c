#include <stdio.h>
int main()
{
	float u,a,v,s,t;
	printf("enter the value of accleration");
	scanf("%f",&u);
	printf("enter the value of time");
	scanf("%f",&t);
	printf("enter the value of accleration");
	scanf("%f",&a);
	v=u+a*t;
	printf("the velocity of the given body is %f",v);
	s=u+a*t*2;
	printf("and distance travelled by the body is %f",s);
	
}
