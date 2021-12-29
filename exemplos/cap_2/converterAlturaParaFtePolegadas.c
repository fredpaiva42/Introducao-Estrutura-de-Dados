// Exemplo que mostra o uso das fuções printf e scanf
// Programa para converter altura em metros para ft e polegadas

#include <stdio.h>

#define FT 30.48
#define POLEGADA 2.54

int converterAlturaParaFtePolegadas(void){
    int pes;
    float altura, polegadas;

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);

    altura *= 100; // converte para centimetros
    pes = (int) (altura / FT); // calcula número de pés
    polegadas = (altura - (pes * FT)) / POLEGADA; // calcula o restante de polegadas

    printf("Altura = %d ft  %.1f pol\n", pes, polegadas);

    return 0;
}
