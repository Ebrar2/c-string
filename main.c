#include <stdio.h>
#include <stdlib.h>
void hesapla(char *dog,char *o,int *d,int *y,int *b)
{
    int i,dogru=0,yanlis=0,bos=0,x,z;
    for(i=0;dog[i+1]!='\0';i++)
    {
        x=dog[i];
        z=o[i];
        if(((dog[i]==o[i])|| (dog[i]!=o[i] && x+32==z)) && o[i]!=' ')
            dogru++;
        else if(o[i]==' ')
            bos++;
        else
            yanlis++;
        printf("\ndog[%d]:%c o[%d]:%c x:%d z:%d dogru:%d bos:%d yanlis:%d",i,dog[i],i,o[i],x,z,dogru,bos,yanlis);


    }
    *d=dogru;
    *b=bos;
    *y=yanlis;

}
int main()
{
    char dog[100],o[100];
    int d=0,y=0,b=0;
    printf("Dogru cevap anahtarini giriniz:");
    fgets(dog,100,stdin);
    printf("Ogrencinin cevap anahtarini giriniz:");
    fgets(o,100,stdin);
    hesapla(dog,o,&d,&y,&b);
    printf("\nDogru sayisi:%d",d);
    printf("\nYanlis sayisi:%d",y);
    printf("\nBos sayisi:%d",b);

    return 0;
}
