#include<stdio.h>
#include<string.h>


void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


void perm(char s[],int l,int h)
{
	int i;
	if(l==h)
	{
		printf("%s\n",s);
	}
	else
	{
		for(i=l;i<=h;i++)
		{
			swap(&s[l],&s[i]);
			perm(s,l+1,h);
			swap(&s[l],&s[i]);
		}
	}
}

int main()
{
	char *s;
	scanf("%s",s);
	int l=0;
	int h=strlen(s)-1;
	perm(s,l,h);
}





