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

void Delete(struct Node *p,int index)
{
 //struct Node *q;
 	int x=-1,i;

	if(index==1)
 	{
 		first=first->next;
 		if(first)first->prev=NULL;
	 	x=p->data;
 		free(p);
 	}
 	else
 	{
 		for(i=0;i<index-1;i++)
		p=p->next;
		p->prev->next=p->next;
		if(p->next)
		p->next->prev=p->prev;
 		x=p->data;
 		free(p);
 	}
}



int main()
{
	int i,n,index;
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
	Delete(first,index);
	display(first);
}
