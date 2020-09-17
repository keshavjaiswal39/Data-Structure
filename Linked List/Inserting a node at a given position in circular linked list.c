#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*Head;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	Head=(struct Node *)malloc(sizeof(struct Node));
	Head->data=A[0];
	Head->next=Head;
	last=Head;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}

void display(struct Node *h)
{
	do
	{
		printf("->");
		printf(" %d ",h->data);
		h=h->next;
	}while(h!=Head);
	printf("\n");
}

int Length(struct Node *p)
{
	int len=0;
	do
	{
		len++;
		p=p->next;
	} while(p!=Head);
	return len;
}

void Insert(struct Node *p,int index,int x)
{
	struct Node *t;
	int i;
	
	if(index<0 || index>Length(Head))
	{
		printf("Cannot be inserted\n");
	}
	
	if(index==0)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=x;
		if(Head==NULL)
		{
			Head=t;
			Head->next=Head;
		} 
		else
		{
		while(p->next!=Head)
		{
			p=p->next;
		}
		p->next=t;
		t->next=Head;
		Head=t;
		}
	}
	else
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=x;
		for(i=0;i<index-1;i++)
		{
			p=p->next;
		}
			t->next=p->next;
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
	display(Head);  
	printf("Enter the index: \n");
	scanf("%d",&index);
	printf("Enter the number to be inserted: \n");
	scanf("%d",&x);
	Insert(Head,index,x);
	display(Head);
}
