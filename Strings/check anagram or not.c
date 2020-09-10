#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100];
	int i,j,x=1;
	printf("Enter the first string: \n");
	scanf("%s",a);
	printf("Enter the second string: \n");
	scanf("%s",b);
	if(strlen(a)==strlen(b))
    {  
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j])
			{
				x=1;
			}
			else
			{
				x=0;
			}
		}
	}
	if(x)
	{
		printf("Anagram");
	}
	else
	{
		printf("Not Anagram");
	}
    }
	else
	{
		printf("Not Anagram");
	}
	}
