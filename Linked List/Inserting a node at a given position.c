#include<stdio.h>
#include<stdlib.h>

struct Node {
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
	int i;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int count(struct Node *p)
{
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	return c;
}

void Insert(struct Node *p, int index, int x)
{
	struct Node *t;
	int i;
	if(index<0 || index>count(p))
	{
		printf("The index is not valid\n");
	}
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=x;
	if(index==0)
	{
		t->next=first;
		first=t;
	}
	else
	{
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
	int i,n,x,index;
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
	printf("%d\n",count(first));
	printf("Enter the index and the value to be inserted: \n");
	scanf("%d %d",&index,&x);
	Insert(first,index,x);
	display(first);
	printf("%d\n",count(first));
}
