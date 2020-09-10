#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter your string: \n");
	gets(str);
	int i,vowel=0,conso=0,word=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowel++;
		}
		else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
			conso++;
		}
	}
	printf("Vowel = %d\nConsonant = %d\n",vowel,conso);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i-1]!=' ')
		{
			word++;
		}
	}
	printf("Word = %d\n",word);
}
