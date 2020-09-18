#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int size;
	int top;
	int *S;
};

void Create(struct Stack *st)
{
	printf("Enter the size\n");
	scanf("%d",&st->size);
	st->top=-1;
	st->S=(int *)malloc(sizeof(int)*st->size);
}

void Display(struct Stack st)
{
	int i;
	for(i=st.top;i>=0;i--)
	{
		printf("%d ",st.S[i]);
	}
	printf("\n");
}


void Push(struct Stack *st,int x)
{
	if(st->top==st->size-1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		st->top++;
		st->S[st->top]=x;
	}
}

void Pop(struct Stack *st)
{
	int x=-1;
	if(st->top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		x=st->S[st->top];
		st->top--;
	}
}

void Peek(struct Stack st,int index)
{
	int x=-1;
	if(st.top-index+1<0)
	{
		printf("Invalid Index");
	}
	else
	{
		x=st.S[st.top-index+1];
		printf("The value at the given index is: %d\n",x);
	}
}

int IsEmpty(struct Stack st)
{
	if(st.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
    }
 }
 
 int IsFull(struct Stack st)
{
	if(st.top==-st.size-1)
	{
		return 1;
	}
	else
	{
		return 0;
    }
 }
 
 int stackTop(struct Stack st)
 {
 	if(!IsEmpty(st))
 	{
 		return st.S[st.top];
	}
	else
	{
		return -1;
	}
 }
 

int main()
{
	int i,x,index;
	struct Stack st;
	Create(&st);
	for(i=0;i<st.size;i++)
	{
		printf("Enter the number: \n");
		scanf("%d",&x);
		Push(&st,x);
	}
	Display(st);
	Pop(&st);
	Display(st);
	Pop(&st);
	Display(st);
	printf("Enter the index: \n");
	scanf("%d",&index);
	Peek(st,index);
	Display(st);
}
