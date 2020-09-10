#include<stdio.h>
#include<string.h>

int main()
{
	char name[100];
	int i=0,j=0,len,count=1;
	scanf("%s",name);
	len=strlen(name);
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(name[j]!=0)
			{
			if(name[i]==name[j])
				{
					count++;
					name[j]=0;
				}
		    }
        }
        if(count>1)
        {
			printf("%c is found %d times\n",name[i],count);
			count=1;
		}
	}
}
