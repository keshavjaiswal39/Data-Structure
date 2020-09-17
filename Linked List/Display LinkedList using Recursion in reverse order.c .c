#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void Create(int A[],int n)
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

void RDisplay(struct Node *p)
{
 	if(p!=NULL)
	{
		RDisplay(p->next);
		printf("%d ",p->data);
	}
	printf("\n");
}


int main()
{
	int i,n;
	int *A;
	printf("Enter the number of elements you want to input: \n");
	scanf("%d",&n);
	A=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	Create(A,n);
	RDisplay(first);
}
