#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char d[50],e[50];
    int i,x,y,say=0;
    printf("Misralari giriniz:\n");
    printf("1.misra:\n");
    fgets(d,50,stdin);
    printf("2.misra:\n");
    fgets(e,50,stdin);
    x=strlen(d);
    y=strlen(e);
    for(i=0;d[x-1-i]!=' ' &&  e[y-1-i]!=' ';i++)
    {
        if(d[x-1-i]==e[y-1-i])
            say++;

    }
    if(say==i)
        printf("\n\nGirilen misralarda cinasli kafiye vardir");
    else
       printf("\n\nGirilen misralarda cinasli kafiye yoktur");


    return 0;
}
