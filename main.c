#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod[5][20];
    int i;
    printf("\nDers kodlarini giriniz:");
    for(i=0;i<5;i++)
    {
        printf("\n%d. dersin kodu:",i+1);
        scanf("%s",&kod[i][0]);
        //scanf("%s",kod[i]);
    }
    printf("\nB harfiyle baslayanlar:\n");
      for(i=0;i<5;i++)
    {
        if(kod[i][0]=='B')
            printf("%s,",kod[i]);

    }
    return 0;
}
