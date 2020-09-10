#include<stdio.h>
#include<string.h>

int ValidString(char *name)
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
		return 0;
	}
	return 1;
}


int main()
{
	char *name;
	scanf("%s",name);
	if(ValidString(name))
	{
		printf("The string is valid\n");
	}
	else
	{
		printf("The string is not valid\n");
	}
}
