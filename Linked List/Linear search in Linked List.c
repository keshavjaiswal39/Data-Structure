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

struct Node * LSearch(struct Node *p,int key)
{
	while(p!=NULL)
	{
		if(key==p->data)
		{
			return p;
		}
		p=p->next;
	}
}


int main()
{
	int *A;
	int i,n,key;
	struct Node *temp;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	create(A,n);
	printf("Enter the elements to be searched in the Linked List: \n");
	scanf("%d",&key);
	temp=LSearch(first,key);
	if(temp)
	{
		printf("Key is found %d",temp->data);
	}
	else
	{
		printf("Key is not found");
	}
}
