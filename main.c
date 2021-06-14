#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char d[10][20];
    char gec[10];
    int i,j,gec2,say,e[10]={0};
    for(i=0;i<10;i++)
    {
        scanf("%s",d[i]);
        printf("\n");
    }
    for(i=0;i<10;i++)
        e[i]=strlen(d[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(e[j]<e[j+1])
            {
                gec2=e[j];
                e[j]=e[j+1];
                e[j+1]=gec2;
                strcpy(gec,d[j]);
                strcpy(d[j],d[j+1]);
                strcpy(d[j+1],gec);
            }
        }
    }
    printf("\n\nEn uzundan en kisaya:\n");
    for(i=0;i<10;i++)
        printf("%s\n",d[i]);
    return 0;
}
