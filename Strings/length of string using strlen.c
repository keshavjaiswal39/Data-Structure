#include<stdio.h>
#include<string.h>

int main()
{
	int i,len1,len2;
	char *string1,*string2;
	gets(string1);  scanf("%s",string2);
	len1=strlen(string1); len2=strlen(string2);
	printf("The length of the string is: %d\n",len1);
    printf("The length of the string is: %d",len2);
}


// gets is used to input the complete string no matter of spaces between them
// e.g dsfgdfsd sdfsdfsd sdf
// of we use scanf then we can only be able to scan till dsfgdfsd, nnut if we use gets() then we can input the entire array;
