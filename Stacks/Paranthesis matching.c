#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char data;
	struct Node *next;
}*top=NULL;

void push(char ch)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	if(t==NULL)
	{
		printf("Stack is full \n");
	}
	else
	{
		t->data=ch;
		t->next=top;
		top=t;
	}
}

char pop()
{
	char x=-1;
	struct Node *t;
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		t=top;
		top=top->next;
		x=t->data;
		free(t);
	}
	return x;
}

int IsBalanced(char *exp)
{
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		{
			push(exp[i]);
		}
		else if(exp[i]==')')
		{
			if(top==NULL)
			{
				return 0;
			}
			pop();
		}
	}
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	char exp[100];
	printf("Enter the string: \n");
	scanf("%s",exp);
	if(IsBalanced(exp))
	{
		printf("The paranthesis are balanced");
	}
	else
	{
		printf("The paranthesis are not balanced");
	}
	return 0;
}








