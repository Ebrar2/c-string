#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
    char sifat[5][20]={"Bu","Su","O","Bir","Birkac"};
    char ozne[5][20]={"adam","cocuk","kus","kedi","araba"};
    char tumlec[5][20]={"sinif","kapan","orman","cayir","agac"};
    char tumlecek[5][20]={"a","dan","in ustunden","in altindan","in icinden"};
    char yuklem[5][20]={"atladi.","kacti.","zipladi.","kostu.","dustu."};
    char d[40];
    srand(time(NULL));
    int x,a=0;
   while(a!=5)
    {
      a++;
      int b;
    b=strlen(d);
    x=rand()%5;
    strcpy(d,sifat[x]);
    b=strlen(d);
    d[b]=' ';
    d[b+1]='\0';
    x=rand()%5;
    strcat(d,ozne[x]);
    b=strlen(d);
    d[b]=' ';
    d[b+1]='\0';
    x=rand()%5;
    strcat(d,tumlec[x]);
    x=rand()%5;
    strcat(d,tumlecek[x]);
    x=rand()%5;
    b=strlen(d);
    d[b]=' ';
    d[b+1]='\0';
    strcat(d,yuklem[x]);
    printf("\n\n\nCumle:\n");
    printf("%s",d);
    }
    return 0;
}
