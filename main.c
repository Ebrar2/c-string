#include <stdio.h>
#include <stdlib.h>
int farkiSay(char *d,char *c)
{
    int i,say=0;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]!=c[i])
            say++;
    }
    return say;
}
int main()
{
    char d[50],c[50];
    int far,i;
    printf("Ilk kelimeyi giriniz:");
    fgets(d,50,stdin);
    do
    {
        printf("\nSonraki kelimeyi giriniz:");
        fgets(c,50,stdin);
        far=farkiSay(d,c);
        if(far==1)
            printf("\n(1 harf farkli zincir bozulmadi)\n");
        else
            printf("\n(%d harf farkli zincir bozuldu\n",far);
        for(i=0;d[i]!='\0';i++)
              d[i]=c[i];
    }
    while(far==1);
        printf("Program bitti");
    return 0;
}
