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
	printf("\n\n");
}


void Push(struct Stack *st,int x)
{
	if(st->top==st->size-1)
	{
		printf("Stack overflow\n\n");
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
		printf("Stack underflow\n\n");
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
		printf("Invalid Index\n\n");
	}
	else
	{
		x=st.S[st.top-index+1];
		printf("The value at the given index is: %d\n\n",x);
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
	int i,x,index,ch;
	struct Stack st;
	
	/*Display(st);
	Pop(&st);
	Display(st);
	Pop(&st);
	Display(st);
	printf("Enter the index: \n");
	scanf("%d",&index);
	Peek(st,index);
	Display(st);*/
	
	
	do
	{
		printf("\n****.M.E.N.U.****\n\n");
		printf("1.  Create\n");
		printf("2.  Display\n");
		printf("3.  Push\n");
		printf("4.  Pop\n");
		printf("5.  Peek\n");
		printf("6.  Stack Top\n\n");
		
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				Create(&st);
				break;
			case 2:
				Display(st);
				break;
			case 3:
				printf("Enter the number: \n");
				scanf("%d",&x);
				Push(&st,x);
				break;
			case 4:
				Pop(&st);
				break;
			case 5:
				printf("Enter the index: \n");
				scanf("%d",&index);
				Peek(st,index);
				break;
			case 6:
				printf("The Stack Top value is: %d\n",stackTop(st));
				break;
		}
	}while(ch<7);
}
