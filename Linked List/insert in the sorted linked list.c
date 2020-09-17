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

void InsertedSort(struct Node *p,int val)
{
	struct Node *t,*q=NULL;
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=val;
	t->next=NULL;
	
	if(first==NULL)
	{
		first=t;
	}
	else
	{
		while(p && p->data<val)
		{
			q=p;
			p=p->next;
		}
		if(p==first)
		{
			t->next=first;
			first=t;
		}
		else
		{
			t->next=q->next;
			q->next=t;
		}
	}
}



int main()
{
	int i,n,val;
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
	printf("Enter the value to be inserted in the sorted linkedList: \n");
	scanf("%d",&val);
	InsertedSort(first,val);
	display(first);
}
