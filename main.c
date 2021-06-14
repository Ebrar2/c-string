#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char d[10][20];
    int i,a;
    printf("Isimleri giriniz:\n");
    for(i=0;i<10;i++)
     {
         scanf("%s",d[i]);
         printf("\n");
     }
    printf("an ile bitenler:\n");
    for(i=0;i<10;i++)
    {
        a=strlen(d[i]);
        if(d[i][a-2]=='a'  &&  d[i][a-1]=='n')
            printf("%s\n",d[i]);
    }
    return 0;
}
