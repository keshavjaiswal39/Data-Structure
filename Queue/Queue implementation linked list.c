#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));
	if(t==NULL)
	{
		printf("Queue is full\n");
	}
	else
	{
		t->data=x;
		t->next=NULL;
		if(front==NULL)
		{
			front=rear=t;
		}
		else
		{
			rear->next=t;
			rear=t;
		}
	}
}

void dequeue()
{
	int x=-1;
	struct Node *t;
	if(front==NULL)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		x=front->data;
		t=front;
		front=front->next;
		free(t);
	}
}

void Display()
{
	struct Node *p=front;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}


int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	printf("The queue after insertion: \n");
	Display();
	dequeue();
	printf("The queue after deletion: \n");
	Display();
	dequeue();
	printf("The queue after deletion: \n");
	Display();
	enqueue(60);
	printf("The queue after insertion: \n");
	Display();
}
