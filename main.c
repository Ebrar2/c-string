#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void emailBreak(char *d,int x,char *s)
{
    int i,j,y=0,k;
    if(x==1)
    {
         for(i=0;d[i]!='@';i++)
                s[i]=d[i];
      s[i]='\0';
    }
    if(x==2)
    {
        for(i=0;d[i]!='@';i++)
         {

         }
        for(j=i+1;d[j]!='.';j++)
        {
            s[y]=d[j];
            y++;
        }
        s[j]='\0';
    }
    else if(x==3)
    {
         for(i=0;d[i]!='@';i++)
         {

         }
         for(j=i+1;d[j]!='.';j++)
         {

         }
        y=0;
          for(k=j+1;d[k]!='\0';k++)
        {
            s[y]=d[k];
            y++;
        }
        s[k]='\0';
    }

  //    printf("\n%s\n",s);

}
int main()
{
    char d[]="ebrar.temel@hotmail.com";
    char s1[50],s2[50],s3[50];
    emailBreak(d,1,s1);
    emailBreak(d,2,s2);
    emailBreak(d,3,s3);
    printf("\n%s-%s-%s\n",s1,s2,s3);
    return 0;
}
