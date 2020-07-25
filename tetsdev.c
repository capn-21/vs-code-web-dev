#include <stdio.h> 
int main()
{FILE *om;
	float percent;
	int rollno,mark1,mark2,mark3,mark4,mark5,total=100,scored;
	char name[100];
	printf("enter the roll no:= \n");
	scanf("%d",&rollno);
	printf("enter the name:=\n");
	scanf("%s",&name);
	printf("enter the marks of the following out of 100 enter mark1:=\n");
	scanf("%d",&mark1);
	printf("enter marks2:=\n");
	scanf("%d",&mark2);
	printf("enter marks3:=\n");
	scanf("%d",&mark3);
	printf("enter marks4:=\n");
	scanf("%d",&mark4);
	printf("enter marks5:=\n");
	scanf("%d",&mark5);
	
	
	scored=mark1+mark2+mark3+mark4+mark5;
	om=fopen("omkarr.txt","w");
	percent=(float)scored/total*100;
	fprintf(om,"name=%s\n",name);
	fprintf(om,"roll number=%d\n",rollno);
		
				fprintf(om,"marks1 =%d\n",mark1);
				fprintf(om,"marks2 =%d\n",mark2);
				fprintf(om,"marks3 =%d\n",mark3);
				fprintf(om,"marks4 =%d\n",mark4);
				fprintf(om,"marks5 =%d\n",mark5);
				
				fprintf(om,"total=%d\n",total);
				fprintf(om,"percentage=%2.f%%\n",percent);
						fprintf(om,"------------------------\n\n");
				fclose(om);
	
			
  
} 

