#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void cogulYap(char *d,char *d2)
{
    int x;
    x=strlen(d);
    strcpy(d2,d);
    if(d2[x-1]=='y')
    {
        d2[x-1]='\0';
        strcat(d2,"ies");
    }
    else if(d2[x-1]=='s')
    {
        d2[x-1]='\0';
        strcat(d2,"es");
    }
    else if(d2[x-1]=='h' && d2[x-2]=='c')
    {
        d2[x-2]='\0';
        strcat(d2,"es");
    }
    else if(d2[x-1]=='h' && d2[x-2]=='s')
    {
          d2[x-2]='\0';
        strcat(d2,"es");
    }
    else
    {
        d2[x]='s';
        d2[x+1]='\0';
    }
}
int main()
{
    char d[80]="chair",d2[80];
    cogulYap(d,d2);
    printf("%s cogulu:%s",d,d2);
    return 0;
}
