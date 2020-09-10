#include<stdio.h>
#include<string.h>

void duplicates_string(char *name,int H[])
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		H[name[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(H[i]>1)
		{
			printf("%c is present %d number of times",i+97,H[i]);
		}
	}
}

int main()
{
	char *name;
	int H[26]={0};
	printf("Enter the string\n");
	scanf("%s",name);
}



