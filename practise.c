#include <stdio.h>
#include <stdlib.h>

struct node{
	int i;
	struct node*next;
};

void list(struct node* n)
{
	while(n!= NULL)
	{printf("%d",n->i);
		n=n->next;
	}
}
int main()
{ struct node* one=NULL;
	struct node* two=NULL;
	struct node* three=NULL;
	
	one=(struct node*)malloc(sizeof(struct node));
	two=(struct node*)malloc(sizeof(struct node));
	three=(struct node*)malloc(sizeof(struct node));
	
	one-> i=20;
	one->next=two;
	
	two-> i=30;
	two->next=three;
	
	three -> i=40;
	three->next=NULL;
	
	
	list(one);
	return 0;
	
}
	
