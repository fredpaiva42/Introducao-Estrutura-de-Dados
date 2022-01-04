/*
 *  Jogo Par ou Ímpar
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int parOuImpar(void) {
    int escolha; /* escolha do usuário: 0 = par, 1 = ímpar */
    int usuario; /* número fornecido pelo usúario */
    int computador; /* número gerado pelo computador */

    printf("Entre com sua escolha: 0 (par) ou 1 (impar):\n");
    scanf("%d", &escolha);
    printf("Entre com seu numero:\n");
    scanf("%d", &usuario);

    /* gera número do computador e exibe */
    srand(time(NULL));
    computador = rand() % 10;
    printf("Computador: %d\n", computador);

    /* testa se a soma é impar ou par, com a escolha do usuario */
    if (((usuario + computador) % 2) == escolha)
        printf("Voce (usuario) ganhou!\n");
    else
        printf("Eu (computador) ganhei!\n");

    return 0;
}