#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100],H[26]={0};
	int i;
	printf("Enter the first string: \n");
	scanf("%s",a);
	printf("Enter the second string: \n");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		H[a[i]-97]++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		H[b[i]-97]--;
		if(H[a[i]]<0)
		{
			printf("Not anagram");
			break;
		}
	}
	if(b[i]=='\0')
	printf("Anagram");
}
