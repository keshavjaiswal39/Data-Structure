#include<stdio.h>
#include<string.h>

int main()
{
	char *name;
	int i,H=0,x=0;
	printf("Enter the string: \n");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		x=1;
		x=x<<(name[i]-97);
		if(x&H!=0)
		{
			printf("%c is duplicate",name[i]);
		}
		else
		{
			H=x|H;
		}
	}
	return 0;	
}
