#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
     printf("Bir Sayi Giriniz: ");
     scanf("%d",&sayi);

     if(sayi%2==0)
     {
        printf("Sayiniz Cifttir.");
     }
    else
    {
    printf("Sayiniz Tektir.");
    }

    return 0;
}
