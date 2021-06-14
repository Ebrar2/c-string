#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void sansur(char d[])
{
    char *p,a[3][10]={"lan","inek","aptal"};
    int i,j,x;
    for(i=0;d[i]!='\0';i++)
    {
        for(x=0;x<3;x++)
          {
              printf("\nx:%d p:%d d:%d p-d:%d",x,p,d,p-d);
              p=strstr(d+i,a[x]);
              if(p!=NULL)
              {
                  printf("j p-d:%d\n",p-d);
                  for(j=p-d;j<p-d+strlen(a[x]);j++)
                   {
                       d[j]='*';
                       printf("j:%d\n",j);
                   }
              }
          }
    }
}
int main()
{
    char d[200];
    printf("Cumleyi giriniz:\n");
    fgets(d,200,stdin);
    sansur(d);
    printf("\n\nYeni Hal\n");
    printf("%s\n",d);
    return 0;
}
