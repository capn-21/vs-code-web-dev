#include <stdio.h>
int main()
{ float p,r,n,si;
printf ("enter the principal amount\n");
scanf("%f",&p);
printf("enter the intrest rate\n");
scanf("%f",&r);
printf("enter the time interval\n");
scanf("%f",&n);
si=(p*r*n)/100;
printf("the simple intrest of the following data is %f",si);
}

