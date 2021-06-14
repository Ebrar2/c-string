#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char d[20],*b,*ara,*i;
    int j,a,c,d2[4]={-1};
    int sayi2;
    float sayi;
    printf("Sorunuzu giriniz:");
    gets(d);
    sayi2=atoi(d);
    printf("\nsay:%d d:%s\n",sayi2,d);
    ara=strstr(d,"km");
    if(ara!=NULL)
       d2[0]=ara-d;
    printf("\n1.ara:%d d:%d d2[0]:%d",ara,d,d2[0]);
    ara=strstr(d,"cm");
    if(ara!=NULL)
        d2[1]=ara-d;
    printf("\n2.ara:%d d:%d d2[1]:%d",ara,d,d2[1]);
     ara=strstr(d,"mm");
    if(ara!=NULL)
       d2[2]=ara-d;
    printf("\n3.ara:%d d:%d d2[2]:%d",ara,d,d2[2]);
   // int ka=d2[0]*d2[1]*d2[2];
    ara=strstr(d,"m");
    if(ara!=NULL)
    {
         if(ara-d==d2[2])
         {
                 ara++;
                 ara=strstr(ara,"m");
         }
        d2[3]=ara-d;
    }
    printf("\n4.ara:%d d:%d d2[3]:%d\n",ara,d,d2[3]);
    int x=0,a1,b1;
    for(j=0;j<4;j++)
    {
        if(d2[j]!=-1 && x==0 && d2[j]!=0)
        {
           a=d2[j];
           a1=j;
           x++;
        }
        else if(d2[j]!=-1 && x!=0 && d2[j]!=0)
        {
             c=d2[j];
             b1=j;
        }
    }
    printf("\na:%d c:%d a1:%d b1:%d ",a,c,a1,b1);
    if(a<c)
    {
      if(a1==0)
          b="km";
      else if(a1==1)
          b="cm";
      else if(a1==2)
          b="mm";
      else
          b="m";

      if(b1==0)
          i="km";
      else if(b1==1)
          i="cm";
      else if(b1==2)
          i="mm";
      else
          i="m";
    }
    else if(a>c)
    {

      if(b1==0)
          b="km";
      else if(b1==1)
          b="cm";
      else if(b1==2)
          b="mm";
      else
          b="m";

       if(a1==0)
         i="km";
      else if(a1==1)
          i="cm";
      else if(a1==2)
          i="mm";
      else
          i="m";

    }
    printf("\nsay:%d *b:%s *i:%s ",sayi2,b,i);
    if(b=="km")
    {
        if(i=="m")
           sayi=(float)sayi2*1000;
        else if(i=="cm")
            sayi=(float)sayi2*100000;
        else if(i=="mm")
                sayi=(float)sayi2*10000;
    }
    else if(b=="cm")
    {
        if(i=="km")
           sayi=(float)sayi2/100000;
        else if(i=="m")
            sayi=(float)sayi2/100;
        else if(i=="mm")
                sayi=(float)sayi2*10;
    }
    else if(b=="mm")
    {
        if(i=="km")
           sayi=(float)sayi2/1000000;
        else if(i=="cm")
            sayi=(float)sayi2/10;
        else if(i=="m")
                sayi=(float)sayi2/1000;
    }
    else
    {
        if(i=="km")
           sayi=(float)sayi2/1000;
        else if(i=="cm")
            sayi=(float)sayi2*100;
        else if(i=="mm")
                sayi=(float)sayi2*1000;
    }
    printf("\n\nSON:%d%s , %.3f %s dir",sayi2,b,sayi,i);
    return 0;
}
