#include <stdio.h>
#include <string.h>
int main()
{char str[100];
	int i,ch,length,count=0.0;
	printf("\n enter the string:\n");
	gets(str);
	
	
	
	printf("\nenter the character:\n ");
	ch=getch();
	length=strlen(str);
	for (i=0;i<length;i++)
	{
		if (str[i]==ch);
		count++;
	}
	printf("totalno of character in the given string is %d",count); 
	return 0;
	
	
}
