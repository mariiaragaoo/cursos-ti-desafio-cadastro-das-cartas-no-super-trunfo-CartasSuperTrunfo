#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 
char estado1[20], estado2[20], cod1[20], cod2[20], cidade1[20], cidade2[20];
float area1, area2, pib1, pib2;
int populacao1, populacao2, pturistico1, pturistico2;

printf ("Digite o Estado da Carta 01 \n");
scanf ("%s", estado1);

printf ("Digite o Codigo da Carta 01 \n");
scanf ("%s", cod1);

printf ("Digite o nome da Cidade \n");
scanf ("%s", cidade1);

printf ("Digite o tamanho da populaçao de %s \n", cidade1);
scanf ("%d", &populacao1);

printf ("Digite o tamanho da area de %s \n", cidade1);
scanf ("%f", &area1);

printf ("Digite o PIB de de %s \n", cidade1);
scanf ("%f", &pib1);

printf ("Digite o numero de pontos turisticos de %s \n", cidade1);
scanf ("%d", &pturistico1);


printf ("Digite o Estado da Carta 02 \n");
scanf ("%s", estado2);

printf ("Digite o Codigo da Carta 02 \n");
scanf ("%s", cod2);

printf ("Digite o nome da Cidade 2 \n");
scanf ("%s", cidade2);

printf ("Digite o tamanho da populaçao de %s \n", cidade2);
scanf ("%d", &populacao2);

printf ("Digite o tamanho da area de %s \n", cidade2);
scanf ("%f", &area2);

printf ("Digite o PIB de de %s \n", cidade2);
scanf ("%f", &pib2);

printf ("Digite o numero de pontos turisticos de %s \n", cidade2);
scanf ("%d", &pturistico2);

printf ("O estado da carta e %s \n", estado1);
printf ("O codigo da carta e %s \n", cod1);
printf ("O nome da cidade e %s \n", cidade1);
printf ("O tamanho da populaçao e de %d \n", populacao1);
printf ("O tamanho da area e %f \n", area1);
printf ("O tamanho do PIB e %f \n", pib1);
printf ("o Numero de pontos turisticos da cidade e de %d \n\n\n", pturistico1);

printf ("O estado da carta e %s \n", estado2);
printf ("O codigo da carta e %s \n", cod2);
printf ("O nome da cidade e %s \n", cidade2);
printf ("O tamanho da populaçao e de %d \n", populacao2);
printf ("O tamanho da area e %f \n", area2);
printf ("O tamanho do PIB e %f \n", pib2);
printf ("o Numero de pontos turisticos da cidade e de %d \n", pturistico2);

  system("PAUSE");	
  return 0;
}
