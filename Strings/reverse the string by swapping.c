#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
char temp;
int i,j;
scanf("%s",name);
for(j=0;name[i]!='\0';j++)
{
}
j=j-1;
for(i=0;i<0;i++,j--)
{
	temp=name[i];
	name[i]=name[j];
	name[j]=temp;
}
printf("The reverse of the string is: %s\n",name);
}

