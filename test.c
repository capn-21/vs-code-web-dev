#include <stdio.h>
#include <string.h>
int main()
{char str1[10];
	char str2[10];
	
	
	int choice,length,value;
	printf("enter the first string");
	scanf("%s",&str1[10]);
	printf("enter the second string");
	scanf("%s",&str2[10]);
	 length = strlen(str1);
	
	strcat(str1,str2);
	value = strcmp(str1,str2);
	
	do{
		printf("**menu**\n");
	printf("1.length of string\n");
	printf("2.copy string\n" );
	printf("3.connect two strings\n");
	printf("4.compare two strings\n");
	printf("enter the choice 1-4");
	scanf("%d",&choice);

	
		switch(choice)
	
		case 1:printf("the legth of string s1 is %d",length=strlen(str1));break;
	case 2: printf(" none"  );break;
	case 3:strcat(str1,str2);
	printf("aftr joining %s",str1);break;
	case 4:value = strcmp(str1,str2);   if(value == 0) 
	        puts("The two strings are equal");   
	           else if(value < 0)       
	               puts("The first string is smaller "); 
           else if(value > 0)
			printf("the legth of string s1 is %d",length);
			puts("the first string is bigger"); break;
			return 0;
	}
	while(choice!=4);
}					 
