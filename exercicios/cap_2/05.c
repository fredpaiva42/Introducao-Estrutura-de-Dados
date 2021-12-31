/*
 * Escreva um programa que capture um valor inteiro em reais (R$) e determine o menor número de notas para se obter o montante fornecido.
 */

#include <stdio.h>

int Ex05Cap2(void) {
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("Digite o valor em reais: \n");
    scanf("%d", &valor);

    cem = valor / 100;
    valor %= 100;
    cinquenta = valor / 50;
    valor %= 50;
    vinte = valor / 20;
    valor %= 20;
    dez =  valor / 10;
    valor %= 10;
    cinco = valor / 5;
    valor %= 5;
    dois = valor / 2;
    valor %= 2;
    um = valor;

    printf("Notas de R$ 100,00: %d \nNotas de R$ 50,00: %d\nNotas de R$ 20,00: %d\nNotas de R$ 10,00: %d\nNotas de R$ 05,00: %d\nNotas de R$ 02,00: %d\nNotas de R$ 01,00: %d\n", cem, cinquenta, vinte, dez, cinco, dois, um);

    return 0;

}