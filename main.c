#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
int cevir(char x);
int rakamTopla(char *d)
{
    int top=0,i,x,gec,say;
    for(i=0;d[i]!='\0';i++)
    {
        if(isdigit(d[i]))
        {
            say=cevir(d[i]);
            top=top+say;
        }
    }
    return top;
}
int cevir(char x)
{
    int a;
    a=(int)x;
   // printf("\na:%d x:",a,x);
    if(a==48)
        return 0;
    else if(a==49)
        return 1;
    else if(a==50)
        return 2;
    else if(a==51)
        return 3;
    else if(a==52)
        return 4;
    else if(a==53)
        return 5;
    else if(a==54)
        return 6;
    else if(a==55)
        return 7;
    else if(a==56)
        return 8;
    else if(a==57)
        return 9;
}
int main()
{
    char d[100];
    printf("Cumleyi giriniz:");
    fgets(d,100,stdin);
    printf("Cumledeki rakamlarin toplami:%d",rakamTopla(d));
    return 0;
}
