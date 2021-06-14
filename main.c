#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int sozukSay(char *d)
{
    int i,say=0;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]==' ' && isalpha(d[i+1]))
            say++;
        if(i==0 && isalpha(d[i])==1)
            say++;
    }

    return say;
}
int main()
{
    char d[40];
    printf("Cumleyi giriniz:");
    fgets(d,40,stdin);
    printf("\n\n\nGirilen cumle %d tane sozcukten olusmakatadir",sozukSay(d));
    return 0;
}
