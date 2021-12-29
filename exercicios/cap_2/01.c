/* Escreva um porgrama que, dado o valor do raio via teclado, calcule e imprima o volume da esfera corresponde.
 * Sabe-se que o volume da esfere é dado por  4/3pir^3
 * */

#include <stdio.h>
#include <math.h>

#define PI 3.14

int Ex01Cap2(void) {
    float raio;
    float volume;

    printf("Digite o valor do raio da esfera: \n");
    scanf("%f", &raio);

    volume = 4 * PI * pow(raio, 3)/3;

    printf("O volume da esfera: %.2f cm3\n", volume);

    return 0;
}