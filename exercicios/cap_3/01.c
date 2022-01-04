/*
 * Escreva um programa em C que receba 3 números inteiros como entrada e imprima, como saída, o maior número recebido.
 */

#include <stdio.h>

int Ex01Cap3(void) {
    int a, b, c, maior;

    printf("Entre com 3 numeros inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        maior = a;
    else if (b > a && b > c)
        maior = b;
    else
        maior = c;

    printf("O maior numero foi: %d", maior);

    return 0;
}