#include<stdio.h> 
struct telephone{
	              int tele_no;  
	                  int cust_code;
                       char cust_name[20];     
	                char cust_address[40];  
	                        int bill_amt;  
	                       };
	                       int main()
	                         {  struct telephone tele = {314345,    463,    "am",    "Nw Delhi",2435};
printf("The values are initialized in this program.");
 printf("\nThe telephone number is  %d",tele.tele_no);
   printf("\nThe customer code is  %d",tele.cust_code); 
    printf("\nThe customer name is  %s",tele.cust_name);
     printf("\nThe customer address is  %s",tele.cust_address);
      printf("\nThe bill amount is   %d",tele.bill_amt);  
								 
}
