#include <stdio.h> 
int main()


{FILE *om,*k;
	char u[33];
	
	om=fopen("asd.txt","w");
		
				fprintf(om,"hi iam oldew here");
				fprintf(om,"ok?");
				fprintf(om,"or not?");
				
				fclose(om);
	
			
 k=fopen("asd.txt","r");
 fscanf(k,"%s");
 printf("%s");
} 

