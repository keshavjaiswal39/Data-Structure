#include<stdio.h>
#include<string.h>

int main()
{
	char *ch;
	printf("Enter the string: \n");
	scanf("%s",ch);
	int x=0,i;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='(')
		{
			x++;
		}
		else if(ch[i]==')')
		{
			x--;
		}
	}
	if(x==0)
	{
		printf("Paranthesis is balanced");
	}
	else
	{
		printf("Paranthesis is not balanced");
	}
}
