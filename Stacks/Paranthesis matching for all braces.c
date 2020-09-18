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
    char x;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==NULL)
            {
                return 0;
            }
            if(exp[i]-top->data==1 || exp[i]-top->data==2)
            {
                pop();
            }
            else
            {
                return 0;
            }
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
    char exp[1000];
    int j,t;
    printf("Enter the number of test cases:\n");
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%s",exp);
        if(IsBalanced(exp))
        {
            printf("YES\n");
            top=NULL;
        }
        else
        {
        printf("NO\n");
        top=NULL;
        }
     }
    return 0;
}








