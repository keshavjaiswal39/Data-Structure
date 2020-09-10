#include <stdio.h>
#include <string.h>


int main() {
   char name[100];
    int i=0;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if((name[i]!='a') && (name[i]!='e') && (name[i]!='i') && (name[i]!='o') && (name[i]!='u'))
        {
            printf("%c",name[i]);
        }
    }
    return 0;
}

