#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char i,j,k,y;
    int x;
 /* for(i='A';(i-1)!='Z';i++)
    {
        printf("|%-3c %-5d|%-3c  %-5d|\n",i,i,i+32,i+32);
    }
    int x;
    printf("\n--------------------------------------------------\n");
    for(x=65;x<=90;x++)
    {
        printf("|%-3c %-5d|%-3c  %-5d|\n",x,x,x+32,x+32);
    }*/
    for(x=0;x<32;x++)
    {
        i=x;
        if(isprint(i)==0)
            i=' ';
        j=x+32;
        if(isprint(j)==0)
            j=' ';
        k=x+64;
        if(isprint(k)==0)
            k=' ';
        y=x+96;
        if(isprint(y)==0)
            y=' ';
       printf("|%-3c %4d|%-3c %4d|%-3c %4d|%-3c %4d|\n",i,i,j,j,k,k,y,y);
    }
    return 0;
}
