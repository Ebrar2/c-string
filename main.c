#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int sonundaVarmi(char *s1,char *s2)
{
    char *k;
    char d[strlen(s1)+1];
    strcpy(d,s1);
   // printf("%s\n",d);
    int i,a=0;
    k=strtok(s1," ");
   // printf("%s\n",k);
    while(k!=NULL)
    {
        a++;
        k=strtok(NULL," ");
     //   printf("%s\n",k);
     //   printf("\na:%d\n",a);
    }
    k=strtok(d," ");
    while(a!=1)
    {
        a--;
        k=strtok(NULL," ");
       // printf("\n%s  a:%d",k,a);

    }
    k[strlen(s2)]='\0';
    if(strcmp(k,s2)==0)
        return 1;
    else
        return 0;
}
int main()
{
    char s1[]="A bulbul neden kondun dalimdaki asmaya,";
    char s2[]="asmaya";
    printf("%d",sonundaVarmi(s1,s2));
    return 0;
}
