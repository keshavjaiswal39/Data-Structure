#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="The quick brown fox";
	char ch='q';
	char t[]=" ";
	char ch1[]="quick";
	char *get=NULL;
	char *get1=NULL;
	char *get2=NULL;
	get=strchr(str,ch);
	printf("STRCHR:  %s\n",get);  //prints the string from the ch i.e if ch is 'q' , the output will be quick brown fox
	get1=strstr(str,ch1);
	printf("STRSTR:  %s\n",get1);   // prints the string upto the ch ie if ch is "quick" , the output will be quick brown fox
	get2=strtok(str,t);
	printf("\nSTRTOK\n");
	while(get2!=NULL)
	{
		printf("%s\n",get2);
		get2=strtok(NULL,t);
	}
} 
