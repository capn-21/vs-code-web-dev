#include <stdio.h>
main()


{
FILE *om;
char o[100];
	om=fopen("omka.txt","r");
  while(fscanf(om,"%s",o)!=EOF)
  {printf("%s",o);
	  } 
	 
	 fclose(om);
	 
	 }
