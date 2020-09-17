#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

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


int Max(struct Node *p)
{
	int max=-32768;
	while(p!=NULL)
	{
		if(p->data>max)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
	  	
}


int main()
{
	int *A;
	int i,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	create(A,n);
	printf("The maximum elements in the linked list is %d \n",Max(first));
}
