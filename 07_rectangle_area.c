#include <stdio.h>
#include <stdlib.h>

int main()
{
       int uzunkenar,kisakenar,cevre,alan;
      printf("Dikdortgenin Uzun Kenarini Giriniz:  ");
      scanf("%d",&uzunkenar);
      printf("Dikdortgenin Kisa Kenarini Giriniz:  ");
      scanf("%d",&kisakenar);

      cevre=(kisakenar+uzunkenar)*2;
      alan=kisakenar*uzunkenar;

    printf("Dikdortgeninizin Alani:  %d\n",alan);
    printf("Dikdortgeninizin Cevresi:  %d",cevre);
    return 0;
}
