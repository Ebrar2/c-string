#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void uzunTarihKopyala(char k[],char u[])
{
    char *x;
    x=strtok(k,"/");
    strcpy(u,x);
    x=strtok(NULL,"/");
    if(strcmp(x,"01")==0)
        strcat(u," Ocak");
    else if(strcmp(x,"02")==0)
        strcat(u," Subat");
    else if(strcmp(x,"03")==0)
        strcat(u," Mart");
    else if(strcmp(x,"04")==0)
        strcat(u," Nisan");
    else if(strcmp(x,"05")==0)
        strcat(u," Mayis");
    else if(strcmp(x,"06")==0)
        strcat(u," Haziran");
    else if(strcmp(x,"07")==0)
        strcat(u," Temmuz");
    else if(strcmp(x,"08")==0)
        strcat(u," Agustos");
    else if(strcmp(x,"09")==0)
        strcat(u," Eylul");
    else if(strcmp(x,"10")==0)
        strcat(u," Ekim");
    else if(strcmp(x,"11")==0)
        strcat(u," Kasim");
    else if(strcmp(x,"12")==0)
        strcat(u," Aralik");
    x=strtok(NULL,"/");
    u[strlen(u)]=' ';
    u[strlen(u)]='\0';
    strcat(u,x);
}
int main()
{
    char kTarih[20];
    char uTarih[30];
    printf("\nKisa tarih dizgisini giriniz(gg/aa/yyyy):");
    scanf("%s",kTarih);
    uzunTarihKopyala(kTarih,uTarih);
    printf("\n\nTarihin uzun hali:%s",uTarih);
    return 0;
}
