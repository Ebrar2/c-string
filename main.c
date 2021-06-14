#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int hesapla(char *d,int *harfS)
{
    int i,j,say=0,r,l;
    char c[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a[26]={0};
    for(i=0;d[i]!='\0';i++)
    {
        if(isalpha(d[i]))
        {
          for(j=0;j<26;j++)
        {
            r=d[i];
            l=c[j];
            if(d[i]==c[j] || r==l+32)
                a[j]=1;
         // printf("\nr:%d l:%d d[%d]:%c c[%d]:%c a[%d]:%d",r,l,i,d[i],j,c[j],j,a[j]);

         }
        }

    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
            say++;
        *harfS=say;
  //  printf("\nharf:%d  say:%d",*harfS,say);
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
            return 0;

    }
    return 1;
}
int main()
{
    char d[60];
    int harfS;
    printf("Ingilizce cumleyi giriniz:");
    fgets(d,60,stdin);
    if(hesapla(d,&harfS))
         printf("\n\nBu cumle palindromdur");
    else
        printf("\n\nBu cumle palindrom degildir");
    printf("\nBu cumledeki harf sayisi:%d",harfS+1);
    return 0;
}
