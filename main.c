#include <stdio.h>
#include <stdlib.h>
void spacemask(char *d)
{
    int i;
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]==' ')
            d[i]='_';
    }
}
int main()
{
    char sample[]="This is a test";
    printf("Once:\n");
    printf("%s",sample);
    spacemask(sample);
    printf("\nSonra:\n");
    printf("%s",sample);
    return 0;
}
