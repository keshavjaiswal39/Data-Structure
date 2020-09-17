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

void Delete(struct Node *p,int index)
{
	struct Node *q;
	int i,x;
	if(index<0 || index>Length(Head))
		return;
	if(index==1)
	{
		while(p->next!=Head)
		{
			x=Head->data;
		}
		if(Head==p)
		{
			free(Head);
			Head=NULL;
		}
		else
		{
			p->next=Head->next;
			free(Head);
			Head=p->next;
		}
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		x=q->data;
		free(q);
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
//	printf("Enter the number to be inserted: \n");
//	scanf("%d",&x);
	Delete(Head,index);
	display(Head);
}
