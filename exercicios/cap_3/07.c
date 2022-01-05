/*
 * Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura.
 * Neste jogo, o usuário e o computador escolhem entre pedra, papel ou tesoura. Sa-
 * bendo que pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel,
 * exiba na tela o ganhador: usuário ou computador. Para esta implementação, as-
 * suma que o número 0 representa pedra, 1 representa papel e 2 representa tesoura.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ex07Cap3(void) {
    int usuario, computador;

    printf("Escolha entre pedra(0), papel(1) e tesoura(2): \n");
    scanf("%d", &usuario);

    srand(time(NULL));
    computador = rand() % 3;
    printf("Computador: %d\n", computador);

    if (usuario == computador){
        printf("Empate!");
    } else if (usuario == 0 && computador == 2 || usuario == 2 && computador == 1 || usuario == 1 && computador == 0){
        printf("Voce (usuario) ganhou!\n");
    } else {
        printf("Eu (computador) ganhei!\n");
    }

    return 0;
}