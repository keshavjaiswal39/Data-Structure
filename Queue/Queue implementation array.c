#include<stdio.h>
#include<stdlib.h>

struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
};

void Create(struct Queue *q,int size)
{
	q->size=size;
	q->front=q->rear=-1;
	q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
	if(q->rear==q->size-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		q->rear++;
		q->Q[q->rear]=x;
	}
}

void dequeue(struct Queue *q)
{
	int x=-1;
	if(q->front==q->rear)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		q->front++;
		x=q->Q[q->front];
	}
}

void Display(struct Queue q)
{
	int i;
	for(i=q.front+1;i<=q.rear;i++)
	{
		printf("%d ",q.Q[i]);
	}
	printf("\n");
}

int main()
{
	struct Queue q;
	int size;
	printf("Enter the size of the array: \n");
	scanf("%d",&size);
	Create(&q,size);
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	printf("The queue after insertion: \n");
	Display(q);
	dequeue(&q);
	printf("The queue after deletion: \n");
	Display(q);
	dequeue(&q);
	printf("The queue after deletion: \n");
	Display(q);
	dequeue(&q);
	printf("The queue after deletion: \n");
	Display(q);
	return 0;
}
