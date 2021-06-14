#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char d[10][10],*k,gec[10][10];
     int e[10]={0};
     int i,j,z;
     printf("Isim ve notlari giriniz:\n");
     for(i=0;i<10;i++)
     {
        scanf ("%[^\n]", d[i]);
        fflush(stdin);
     }
     for(i=0;i<10;i++)
     {
         k=strstr(d+i," ");
         e[i]=atoi(k+1);
     }

     for(i=0;i<10;i++)
     {
         for(j=i+1;j<10;j++)
         {
             if(e[i]<e[j])
             {
                 int gec2;
                 gec2=e[i];
                 e[i]=e[j];
                 e[j]=gec2;
                 strcpy(gec,d[i]);
                 //printf("\ngec:%s d[i]:%s d[j]:%s",gec,d[i],d[j]);
                 strcpy(d[i],d[j]);
                 strcpy(d[j],gec);
                 //printf("\ngec:%s d[i]:%s d[j]:%s",gec,d[i],d[j]);

             }
         }
     }
     printf("\n\nNota gore sirala\n\n");
     for(i=0;i<10;i++)
        printf("%s\n",d[i]);
    return 0;
}
