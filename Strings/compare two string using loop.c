#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
char temp[50];
printf("Enter the first string: \n");
scanf("%s",name);
printf("Enter the second string: \n");
scanf("%s",temp);
int i,j;
for(i=0,j=0;name[i]!='\0' && temp[j]!='\0';i++,j++)
{
	if(name[i]!=temp[j])
	break;
}
if(name[i]==temp[j])
{
	printf("Equal");
}
else if(name[i]>temp[j])
{
	printf("Greater");
}
else
{
	printf("Smaller");
}
}
