#include <stdio.h>
#include <stdlib.h>
void bulCikar(char *d,char *c)
{
    char *p;
    int i,say;
    say=strlen(c);
    p=strstr(d,c);
    for(i=p-d;d[i]!='\0';i++)
        d[i]=d[i+say];
  //    printf("%s\n",d);
    while(p!=d+strlen(d))
    {
        p=strstr(d,c);
      for(i=p-d;d[i]!='\0';i++)
           d[i]=d[i+say];
   //   printf("%s  d:%d p:%d   p:%s \n",d,d,p,p);
    }

}
int main()
{
    char d[]="Kamuran  muratla aysenin yaninda toplumur";
    char c[]="mur";
    bulCikar(d,c);
      printf("%s\n",d);
    return 0;
}
