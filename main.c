#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int kacinci(char s[],char s2[])
{
    char *p,s1[strlen(s)+1];
    int say=0;
    strcpy(s1,s);
    p=strtok(s1," ");
    say++;
    if(strcmp(p,s2)==0)
         return 1;
    while(p!=NULL)
    {
          say++;
          p=strtok(NULL," ");
          if(strcmp(p,s2)==0)
            return say;
    }
}
int main()
{
    char s1[]="Bil102 final sinavi bitti";
    char s2[]="sinavi";
    printf("%s\ndizgisinde %s dizgisi %d.kelimededir",s1,s2,kacinci(s1,s2));
    return 0;
}
