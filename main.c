#include <stdio.h>
#include <stdlib.h>
void yapitirnk(char *s1,int x,char *s2,int y)
{
    int i,j=0;
    for(i=x-1;j!=y;i++)
    {
         s1[i]=s2[j];
         j++;
    }
}
int main()
{
    char s1[]="Bilgisayar Arasinav";
    char s2[]="102 Dersi";
    yapitirnk(s1,12,s2,3);
    printf("%s\n",s1);
    return 0;
}
