#include<stdio.h>
#include<string.h>

void toLower(char *string);
void toUpper(char *string);
void Low_Upp(char *string);


void toLower(char *string)
{
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		string[i]+=32;
	}
	printf("The lower case of the given string is %s\n",string);
}

void toUpper(char *string)
{
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		string[i]-=32;
	}
	printf("The upper case of the given string is %s\n",string);
}

void Low_Upp(char *string)
{
	int i;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
			string[i]+=32;
		}
		else if(string[i]>=97 && string[i]<=122)
		{
			string[i]-=32;
		}
	}
	printf("The case change of the string is: %s\n",string);
}

int main()
{
	char *string;
	int ch;
	
	do
	{
		printf("\n***********************M E N U***********************\n");
		printf("1. To Lowercase\n");
		printf("2. To Uppercase\n");
		printf("3. Upper to Lower and Lower to Upper\n");
		
		
	printf("\nEnter your choice: \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the string to be converted to lower case: \n");
			scanf("%s",string);
			toLower(string);
			break;
		case 2:
			printf("Enter the string to be converted to upper case: \n");
			scanf("%s",string);
			toUpper(string);
			break;
		case 3:
			printf("Enter the string to be converted to upper case: \n");
			scanf("%s",string);
		 	Low_Upp(string);
			
	}
    
	}while(ch<3);
	
}
