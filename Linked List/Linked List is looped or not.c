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

void display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int Isloop(struct Node *p)
{
	struct Node *a,*b;
	a=b=p;
	do
	{
		a=a->next;
		b=b->next;
		if(b)
		{
			b=b->next;
		}
		else
		{
			b=NULL;
		}
	}
	while(a && b);
	if(a==b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	struct Node *t1,*t2;
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
	create(A,n);
	t1=first->next->next;
 	t2=first->next->next->next->next;
 	t2->next=t1;
	if(Isloop(first))
	{
		printf("Loop linked list");
	}
	else
	{
		printf("Not loop linked list");
	}
}
