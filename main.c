#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void devrikYap(char *d)
{
   char *a,*b,*c,*e,gec[100],gec2[100];
   int i;
   strcpy(gec,d);
   strcpy(gec2,d);
   e=strstr(gec," ");
   while(strstr(e+1," ")!=NULL)
   {
       e=strstr(e+1," ");
    //   printf("\ne:%s e:%d gec:%d gec:%s",e,e,gec,gec);
   }
   a=strtok(gec2," ");
   b=strtok(NULL," ");
   c=strtok(NULL," ");
  // a=strtok(gec3," ");
 //  printf("\n\na:%s\n",a);
  // printf("b:%s\n",b);
  // printf("c:%s\n",c);
  // printf("e:%e\n",e);
   strcpy(d,e);
   for(i=0;d[i]!='\0';i++)
   {

   }
   d[i]=' ';
   d[i+1]='\0';
 //  printf("\nd:%s e:%s",d,e);
   strcat(d,c);
   for(i=0;d[i]!='\0';i++)
   {

   }
   d[i]=' ';
   d[i+1]='\0';
 //  printf("\nd:%s e:%s  c:%s",d,e,c);
   strcat(d,b);
    for(i=0;d[i]!='\0';i++)
   {

   }
   d[i]=' ';
   d[i+1]='\0';
 //   printf("\nd:%s e:%s  c:%s  b:%s",d,e,c,b);
   strcat(d,a);
  // printf("\nd:%s e:%s  c:%s  b:%s a:%s",d,e,c,a);
}
int main()
{
    char d[100]="baharda agaclar kuslar guzeldir";
     devrikYap(d);
    printf("Devrik cumle:%s",d);
    return 0;
}
