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

void Delete(struct Node *p,int pos)
{
	struct Node *q=NULL;
	int x=-1,i;
	
	if(pos<1 || pos>count(p))
	printf("Deletion can not be performed du to invalid position");
	if(pos==1)
	{
		q=first;
		x=first->data;
		first=first->next;
		free(q);
	}
	else
	{
		for(i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		free(p);
	}
}


int main()
{
	int i,n,pos;
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
	printf("Enter the position to be deleted in the linkedList: \n");
	scanf("%d",&pos);
	Delete(first,pos);
	display(first);
}
