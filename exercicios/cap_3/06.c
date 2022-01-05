/*
 * Modifique o programa do jogo "par ou ímpar" apresentado para que, em vez de o
 * usuário, o computador escolha, de forma aleatória, se quer par ou ímpar. O usuário
 * apenas fornece seu número.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ex06Cap3(void) {
    int escolha;
    int usuario;
    int computador;

    srand(time(NULL));
    escolha = rand() % 2;
    printf("computador: ");
    printf(escolha == 1 ? "Par\n" : "Impar\n");

    printf("Entre com seu numero:\n");
    scanf("%d", &usuario);

    computador = rand() % 10;
    printf("Computador: %d\n", computador);

    if (((usuario + computador) % 2) == escolha)
        printf("Voce (usuario) ganhou!\n");
    else
        printf("Eu (computador) ganhei!\n");

    return 0;
}