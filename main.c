#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d[100];
    int x=0,y=0,i;
    printf("Dizgiyi giriniz:");
    fgets(d,100,stdin);
    for(i=0;d[i]!='\0';i++)
    {
        if(d[i]=='a' || d[i]=='ý' || d[i]=='o' || d[i]=='u')
            x++;
        else if(d[i]=='e' || d[i]=='i' || d[i]=='ö' || d[i]=='ü')
            y++;
    }
    if(x==0 && y!=0)
        printf("\nBuyu unlu uyumuna uyar");
    else if(x!=0 && y==0)
        printf("\nBuyu unlu uyumuna uyar");
    else
        printf("\nBuyuk unlu uyumuna uymaz");
    return 0;
}
