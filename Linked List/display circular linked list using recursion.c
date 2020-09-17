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

void Rdisplay(struct Node *h)
{
	static int flag=0;
	if(h!=Head || flag==0)
	{
		flag=1;
		printf("->");
		printf(" %d ",h->data);
		Rdisplay(h->next);
	}
	flag=0;
}

int main()
{
	int i,n,*A;
	printf("Enter the number of elements in the array: \n");
	scanf("%d",&n);
	A=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	create(A,n);
	Rdisplay(Head);
	
}
