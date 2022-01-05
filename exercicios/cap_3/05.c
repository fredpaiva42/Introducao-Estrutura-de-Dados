/*
 * Considere as equações de movimento para calcular a posição (s) e a velocidade (v)
 * de uma partícula em determinado instante t, dado sua aceleração a, posição inicial
 * s0 e velocidade inicial v0, de acordo com as fórumulas:
 *
 *                                  s = s0 + v0t + (at^2)/2
 *                                  v = v0 + at
 *
 * Escreva um programa em C completo que capture os valores de s0, v0, a e t, fornecidos
 * pelo usuário via teclado, e calcule e exiba os valores de s e v. Todos os valores
 * tratados no programa devem ser números reais (float ou double).
 */

#include <stdio.h>
#include <math.h>

int Ex05Cap3(void) {
    double s0, v0, t, a, s, v;

    printf("Entre com a posicao inicial e a velocidade inicial:\n");
    scanf("%lf %lf", &s0, &v0);
    printf("\nEntre com a aceleracao e o tempo em segundos: \n");
    scanf("%lf %lf", &a, &t);

    s = s0 + (v0 * t) + (a * pow(t,2))/2;
    v = v0 + a * t;

    printf("v: %.2f\n", v);
    printf("s: %.2f", s);

    return 0;
}