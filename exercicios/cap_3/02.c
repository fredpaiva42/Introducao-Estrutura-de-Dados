/*
 * Escreva um programa em C que receba 3 números inteiros como entrada e imprima, como saída, os números em ordem crescente.
 */

#include <stdio.h>

int Ex02Cap3(void) {
    int a, b, c;

    printf("Entre com 3 numeros inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c && a > c){
        printf("%d\n%d\n%d", c,b,a);
    }
    else if (a > b && b < c && a > c){
        printf("%d\n%d\n%d", b,c,a);
    } else if (b > a && a > c && b > c){
        printf("%d\n%d\n%d", c,a,b);
    } else if (b > a && a < c && b > c) {
        printf("%d\n%d\n%d", a,c,b);
    } else{
        if (a > b){
            printf("%d\n%d\n%d", b,a,c);
        } else {
            printf("%d\n%d\n%d", a,b,c);
        }
    }

    return 0;
}