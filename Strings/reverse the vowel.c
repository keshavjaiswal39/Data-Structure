#include <stdio.h>
#include <string.h>

void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

//trumpisshit


int main() {
   char name[100];
    int i=0,j;
    scanf("%s",name);
    j=strlen(name)-1;
    while(i<j)
    {
        while((name[i]!='a') && (name[i]!='e') && (name[i]!='i') && (name[i]!='o') && (name[i]!='u'))
        {
            i++;
        }
        while((name[j]!='a') && (name[j]!='e') && (name[j]!='i') && (name[j]!='o') && (name[j]!='u'))
        {
            j--;
        }
            swap(&name[i++],&name[j--]);
    }
    printf("%s",name);
    return 0;
}

