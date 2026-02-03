#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sayi1,sayi2;
    printf("Ilk Sayinizi Giriniz: ");
    scanf("%d",&sayi1);
    printf("Ikinci Sayinizi Girin: ");
    scanf("%d",&sayi2);

    if (sayi1>sayi2)
    {
        printf("Ilk Sayiniz Ikinci Girdiginiz Sayidan Buyuktur. \n");
    }
     else if (sayi1==sayi2)
    {
        printf("Girdiginiz Iki Sayida Birbirine Esittir. \n");
    }
    else
    {
        printf("Girdiginiz Ikinci Sayi Ilk Girdiginiz Sayidan Daha Buyuktur. \n");
    }

    return 0;
}
