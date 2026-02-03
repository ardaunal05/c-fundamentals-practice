#include <stdio.h>
#include <stdlib.h>

int main()
{
      float yaricap,cevre,alan;
      const float pi=3.14;
      printf("Dairenin Yaricapini Giriniz:");
      scanf("%f",&yaricap);

      cevre=2*pi*yaricap;
      alan=pi*yaricap*yaricap;

      printf("Dairenin Alani: %.2f\n",alan);
      printf("Dairenin Cevresi: %.2f",cevre);

    return 0;
}
