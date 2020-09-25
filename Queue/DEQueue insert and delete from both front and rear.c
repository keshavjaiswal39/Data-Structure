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

void dEenqueuefront(struct Queue *q,int x)
{
	if (q->front == -1) 
	{
        printf("Queue is full");
    }
    else 
	{
        q->Q[q->front] = x;
        q->front--;
    }
}

void dEenqueuerear(struct Queue *q,int x)
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

void dEdequeuefront(struct Queue *q)
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

void dEdequeuerear(struct Queue *q)
{
	int x=-1;
	if(q->front==q->rear)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		x=q->Q[q->rear];
		q->rear--;
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
	
	dEenqueuerear(&q,10);
	printf("The queue after insertion at rear: \n");
	Display(q);
	
	dEenqueuerear(&q,20);
	printf("The queue after insertion at rear: \n");
	Display(q);
	
	dEenqueuerear(&q,30);
	printf("The queue after insertion at rear: \n");
	Display(q);
	
	dEdequeuefront(&q);
	printf("The queue after deletion from front: \n");
	Display(q);
	
	dEdequeuefront(&q);
	printf("The queue after deletion from front: \n");
	Display(q);
	
	dEenqueuefront(&q,10);
	printf("The queue after insertion at front: \n");
	Display(q);
	
	dEenqueuefront(&q,20);
	printf("The queue after insertion at front: \n");
	Display(q);
	
	dEdequeuerear(&q);
	printf("The queue after deletion from front: \n");
	Display(q);
	
	dEdequeuerear(&q);
	printf("The queue after deletion from front: \n");
	Display(q);
	
	
	return 0;
}
