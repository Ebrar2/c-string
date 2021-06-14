#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d[4][50];
    int i;
    printf("Siirinizi giriniz:\n");
    for(i=0;i<4;i++)
    {
        scanf("%[^\n]",d[i]);
        fflush(stdin);
        printf("\n");
    }
    for(i=0;i<4;i++)
       {
           printf("%c",d[i][0]);
       }
    return 0;
}
