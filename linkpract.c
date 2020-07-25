#include <stdio.h>
#include <stdlib.h>

struct ode{
	int i;
	struct ode* next;
};
void printList(struct ode* n)
{ 
	while(n != NULL)
	{
	printf(" %d ",n->i);
	n = n-> next;
	}
}
int main()
{
		struct ode* head=NULL;
		struct ode* second=NULL;
		struct ode* third=NULL;
		
	head=(struct ode*)malloc(sizeof(struct ode));
	second=(struct ode*)malloc(sizeof(struct ode));
	third=(struct ode*)malloc(sizeof(struct ode));
	
	head-> i=4;
	head->next=second;
	
	second-> i=5;
	second->next=third;
	
	third-> i=9;
	third->next= NULL;
	
	
	
	printList(head);
	return 0;
}
	































