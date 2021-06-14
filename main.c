#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
int checkAcronomy(char *d,char *c)
{
   char e[10],*k,x;
   int a=0;
   e[a]=d[a];
   a++;
   k=strstr(d," ");
   while(k!=NULL)
   {
        x=toupper(d[k-d+1]);
        e[a]=x;
        printf("\ne:%s k-d+1:%d a:%d",e,k-d+1,a);
        k=strstr(k+1," ");
         a++;
    }
    e[a]='\0';
    c[a]='\0';
    if(!(strcmp(e,c)))
           return 1;
    else
        return 0;
}
int main()
{
    char d[50];
    char c[10];
    printf("Cumle giriniz:");
    fgets(d,50,stdin);
    printf("Kisaltmayi giriniz:");
    fgets(c,10,stdin);
    printf("\n\nSonuc:%d",checkAcronomy(d,c));
    return 0;
}
