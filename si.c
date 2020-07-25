#include <stdio.h>
int main()
{ flot p,r,n,si;
printf ("enter the principal amount");
scanf("%f",&p);
printf("enter the intrest rate");
scanf("%f",&r);
printf("enter the time interval");
scanf("%f",&n);
si=(p*r*n)/100;
printf("the simple intrest of the following data is %f",si);
}
