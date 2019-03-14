#include <stdio.h>

#define KELIME_BOYUTU 15

int main()
{

    char metin1[KELIME_BOYUTU], metin2[KELIME_BOYUTU];

    printf("Kelime 1 giriniz: ");
    scanf("%s",metin1);

    printf("Kelime 2 giriniz: ");
    scanf("%s",metin2);

    int i=0;
    while(i<KELIME_BOYUTU)
    {
        if(metin1[i]==metin2[i])
        {
            i++;
        }
        else if(metin1[i]<metin2[i])
        {
            printf("\n  %s sözlükte daha önce geliyor.   \n\n",metin1);
                break;
        }
        else if(metin1[i]>metin2[i])
        {
            printf("\n  %s sözlükte daha önce geliyor.   \n\n",metin2);
                break;
        }
    }

// uzun yoldan yaptığım eski hali şu şekildedir:

/*
    if(metin1[0]<metin2[0])
    {
        printf("\n %s sözlükte daha önce geliyor.   \n\n",metin1);
    }
    else if(metin1[0]>metin2[0])
    {
        printf("\n %s sözlükte daha önce geliyor.   \n\n",metin2);
    }
    else if(metin1[0]==metin2[0])
    {
        while(i<KELIME_BOYUTU)
        {
            if(metin1[i]==metin2[i])
            {
                i++;
            }
            else if(metin1[i]<metin2[i])
            {
                printf("\n %s sözlükte daha önce geliyor.   \n\n",metin1);
                break;
            }
            else if(metin1[i]>metin2[i])
            {
                printf("\n %s sözlükte daha önce geliyor.   \n\n",metin2);
                break;
            }
        }
    }

*/

    printf("Girdiginiz kelime 1: %s \n",metin1);

    printf("Girdiginiz kelime 2: %s \n",metin2);

    printf("\n\n");
    return 0;
}
