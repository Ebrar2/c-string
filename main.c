#include <stdio.h>
#include <stdlib.h>
void hesapla(char *d,int *b,int *g,int *f)
{
    int x=0,y=0,z=0;
    int i;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]=='B' || d[i]=='b')
            x++;
        else if(d[i]=='G' || d[i]=='g')
            y++;
        else if(d[i]=='F' || d[i]=='f')
            z++;
    }
    *b=x/5;
    *g=y/5;
    *f=z/5;
}
int main()
{
    char d[60];
    int b,f,g;
    printf("Sampiyonluklari giriniz(1959-):\n");
    fgets(d,60,stdin);
    hesapla(d,&b,&g,&f);
    printf("\nBesiktas yildiz sayisi:%d\n",b);
    printf("\nFenerbahce yildiz sayisi:%d\n",f);
    printf("\nGalatasaray yildiz sayisi:%d\n",g);

    return 0;
}
