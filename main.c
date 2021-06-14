#include <stdio.h>
#include <stdlib.h>
void fazlaBoslukSil(char *d)
{
    int i,j;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]==' ' && d[i+1]==' ')
        {

            for(j=i;d[j]!='\0';j++)
            {
                d[j]=d[j+1];
            }
            i=0;
        }

    }
}
int main()
{
    char d[50];
    printf("Cumleyi giriniz:");
    fgets(d,50,stdin);
    fazlaBoslukSil(d);
    printf("\nSon Hali:%s",d);
    return 0;
}
