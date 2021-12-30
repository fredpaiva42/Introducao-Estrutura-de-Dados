/*
 * Escreva um programa que converta o valor de ângulo dado em radianos para o vaor correspondente em graus, minutos, e segundos.
 * Sabe-se que 1 radiano equivale a 57.29578 graus.
 */

#include <stdio.h>

#define UM_RAD_GRAUS 57.29578

int main(void) {
    float anguloRad, graus, segundos;
    int minutos;

    printf("Digite o valor do ângulo em radianos: \n");
    scanf("%f", &anguloRad);

    graus = anguloRad * UM_RAD_GRAUS;
    anguloRad = graus * 60;
    minutos = (int) anguloRad % 60;
    anguloRad -= minutos;
    anguloRad *= 60;
    segundos =  (int) anguloRad % 60;


    printf("%.0f %d' %.0f\"", graus, minutos, segundos);

    return 0;
}