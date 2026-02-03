#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir Sayi Giriniz: ");
    scanf("%d",&sayi);

    if(sayi>0)
    {
        printf("Sayiniz Pozitiftir.\n");
    }
    else if (sayi==0)
    {
        printf("Sayiniz Sifira Esittir.\n");
    }
    else
    {
        printf("Sayiniz Negatiftir.\n");
    }

    return 0;
}
