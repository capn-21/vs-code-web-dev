#include <stdio.h>
int main()
{int rem ,number,i,sum;
	printf("enter the integer");
			scanf("%d",&number);
			 for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;

}
	
