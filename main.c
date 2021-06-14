#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char cumle[80];
    char kelime[20];
    char *ara;
    int say=0,i;
    printf("Cumle giriniz:");
    fgets(cumle,80,stdin);
    for(i=0;cumle[i]!='\0';i++)
        printf("d[%d]:%c:%d\n",i,cumle[i],&cumle[i]);
    printf("\nAranacak kelimeyi giriniz:");
    scanf("%20s",kelime);
    ara=strstr(cumle,kelime);
    printf("\nara:%c cumle:%d ara:%d ",*ara,cumle,ara);
    while(ara!=NULL)
    {
        say++;
        ara++;
        printf("\nara:%d",ara);
        ara=strstr(ara,kelime);
        printf("\nsay:%d ara:%d\n",say,ara);
    }
    printf("\"%s\" kelimesi cumle icinde %d kere gecer",kelime,say);
    return 0;
}
