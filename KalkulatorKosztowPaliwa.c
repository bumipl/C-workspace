/* Kalkulator kosztów paliwa */
#include <stdio.h>
#include <string.h>

int main() 
{
    float trasa, spalanie, cena, koszt, zaOsobe;
    char wybor[32];
    int liczbaOsob;

    printf("Podaj długość trasy [km]: ");
    scanf("%f", &trasa);

    printf("Podaj średnie spalanie na trasie [L/100km]: ");
    scanf("%f", &spalanie);

    printf("Podaj cene za litr paliwa: ");
    scanf("%f", &cena);

    koszt = ( trasa / 100  ) * spalanie * cena;
    
    printf("Koszt całkowity przejechania trasy to %.2f zł\n", koszt); // %.2f - precyzja do dwóch miejsc po przecinku
    
    printf("Czy chcesz podzielić kwotę na ilość pasażerów? [tak/nie]: ");
    scanf("%s", wybor);

    if (strcmp( wybor, "tak") == 0)
    {
      printf("Ile osob bylo w aucie podczas podróży?: ");
      scanf("%d", &liczbaOsob);

      zaOsobe = ( koszt / liczbaOsob );
      printf("Cena kosztu trasy za osobę to: %.2f\n", zaOsobe); // %.2f - precyzja do dwóch miejsc po przecinku
    }
    else
    {
      printf("Nie podzielono kosztu na ilość pasażerów.\n");
    }
    return 0;
}
