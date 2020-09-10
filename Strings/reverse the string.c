#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
char temp[50];
int i,j;
scanf("%s",name);
for(i=0;name[i]!='\0';i++)
{
}
i=i-1;
for(j=0;i>=0;i--,j++)
{
	temp[j]=name[i];
}
temp[j]='\0';
printf("The reverse of the string is: %s\n",temp);
}

