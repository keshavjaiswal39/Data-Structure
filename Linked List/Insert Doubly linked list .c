#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}*first;

void create(int A[],int n)
{
	struct Node *last,*t;
	int i;
	
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=first->prev=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t; 
	}
}

void display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

void Insert(struct Node *p,int index,int x)
{
	int i;
	struct Node *t;
	if(index==0)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t; 
		first=t;
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p=p->next;
		}
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=x;
		t->prev=p;
		t->next=p->next;
		if(p->next)
		p->next->prev=t;
		p->next=t;
		
	}
}



int main()
{
	int i,n,index,x;
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
	display(first);  
	printf("Enter the index: \n");
	scanf("%d",&index);
	printf("Enter the number to be inserted: \n");
	scanf("%d",&x);
	Insert(first,index,x);
	display(first);
}
