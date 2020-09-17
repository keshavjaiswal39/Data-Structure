// Using loop and recursion:

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*first=NULL;   //global pointer

void create(int A[],int n);
void Display(struct Node *p);
void RDisplay(struct Node *p);

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}	
}

void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

void RDisplay(struct Node *p)
{
 	if(p!=NULL)
	{
		printf("%d ",p->data);
		RDisplay(p->next);
	}
	printf("\n");
}

int main()
{
	int *A;
	int i,n;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	A=(int *)malloc(n*sizeof(int));
	printf("Enter the elements: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	create(A,n);
	Display(first);
	RDisplay(first);
}
