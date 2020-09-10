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
if(strcmp(name,temp)==0)
{
	printf("Equal");
}
else if(strcmp(name,temp)>0)
{
	printf("%s is greater than %s",name,temp);
}
else
{
	printf("%s is less than %s",name,temp);
}
}
