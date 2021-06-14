#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char d[20];
   int i,a,say=0;
   printf("Dizgiyi giriniz:");
   fgets(d,20,stdin);
   a=strlen(d)-1;
   for(i=0;i<a/2;i++)
   {
       if(d[i]==d[a-1-i])
        say++;
   }
  if(say==a/2)
     printf("Palindrom dizgi");
  else
      printf("Palindrom olmayan dizgi");
    return 0;
}
