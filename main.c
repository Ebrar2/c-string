#include <stdio.h>
#include <stdlib.h>
void hesapla(char *d,int *x,int *y,int *b)
{
    int i,a=0,c=0,e=0;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]=='X' || d[i]=='x')
            *x+=1;
        else if(d[i]=='Y' || d[i]=='y')
            *y+=1;
        else if(d[i]==' ')
            *b+=1;
    }
  /**x=a;
    *y=c;
    *b=e;*/
}
int main()
{
    char d[50];
    int x=0,y=0,b=0;
    printf("Robot icin komut dizigisini:");
    fgets(d,50,stdin);
    hesapla(d,&x,&y,&b);
    printf("\n\nBekleme sayisi:%d\n",b);
    printf("Son konumun x i:%d\n",x);
    printf("Son konumun y si:%d\n",y);
    return 0;
}
