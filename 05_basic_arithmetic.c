#include <stdio.h>
#include <stdlib.h>

int main()
{
     float sayi1,sayi2,toplam,carpim,bolum,fark;
     printf("Ilk Sayinizi Giriniz:");
     scanf("%f",&sayi1);
     printf("Ikinci Sayinizi Giriniz:");
     scanf("%f",&sayi2);

      toplam=sayi1+sayi2;
      fark=sayi1-sayi2;
      carpim=sayi1*sayi2;
      bolum=sayi1/sayi2;


      printf("Sayilarimizin Toplam Degeri: %.2f\n",toplam);
      printf("Sayilarimizin Farki: %.2f\n",fark);
      printf("Sayilarimizin Carpimi: %.2f\n",carpim);
      printf("Sayilarimizin Bolumu: %.2f",bolum);

    return 0;
}
