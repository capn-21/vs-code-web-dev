#include <stdio.h>
#include <string.h>
int main()
{ struct book;
	int bookno;
	char bookname[30];
	float bookprice;
    };
	struct book[5];
	int i,ch,maxi;
	float max;
	
	for(i=0;i<5;i++)
	{
	
	printf("\nenter the bookno: \n");
	scanf("%d",&b[i].bookno);
	printf("\nenter the bookname : \n");
	scanf("%s",&b[i].bookname);
	printf("\nenter the bookprice : \n");
	scanf("%f",&b[i].bookprice);
    }
	do
	{
		printf("\n\n\n1:display all the books having price more than 500\n");
		printf("\n2:display the book having the  maximum price\n");
		printf("\n3:display list of all books\n");
		printf("\n4:exit the program");
		printf("\nenter the choice [1-4]\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:for(i=0;i<5;i++)
					{if (b[i].bookprice <500)
						printf ("%d		|%s		|%f		|",b[i].bookno,b[i].bookname,b[i].bookprice);
					}break;
			case 2:max=b[0].bookprice
						max[i]=0;
						for (i=1;i<5;i++)
						{if(b[i]bookprice>max);
							{max=b[i].bookprice;
								maxi=i;}
						
						printf ("%d		|%s		|%f		|",b[maxi].bookno,b[maxi].bookname,b[maxi].bookprice);
			case 3:	printf("|-----------------------------|\n");
					printf("|bookno |  bookname |bookprice|\n");
					for (i=1;i<5;i++);	
				    printf("|%d		|%s 		|%f       |",b[i].bookno,b[i].bookname,b[i].bookprice);
					for (i=1;i<5;i++);break;
					case 4:printf("thank you");break;
				}
					while(ch!=4);
				}return 0;
