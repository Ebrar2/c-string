#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char d[5][20];
    char gec[10];
    int i,j,k;
    printf("Isimleri giriniz:\n");

    for(i=0;i<5;i++)
    {
        scanf("%s",d[i]);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            k=strcmp(d[j],d[j+1]);
            if(k>0)
            {
                strcpy(gec,d[j]);
                strcpy(d[j],d[j+1]);
                strcpy(d[j+1],gec);
            }
        }
    }
    printf("\nSiralanmis Hali:\n");
    for(i=0;i<5;i++)
        printf("%s\n",d[i]);
    return 0;
}
