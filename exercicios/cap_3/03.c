/*
 * Considere uma disciplina que adota o seguinte critério de aprovação: os alunos
 * fazem duas provas (P1 e P2) iniciais; se a média nas duas provas for maior ou igual
 * a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto. Caso
 * contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerando-
 * se a terceira nota e a maior das notas entre P1 e P2. Neste caso, o aluno é aprovado
 * se a média final for maior ou igual a 5.0.
 *
 * Escreva um programa completo que leia inicialmente as duas notas de um aluno,
 * fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno
 * passar direto, o programa deve capturar a nota da terceira prova, também fornecida
 * via teclado. Como saída, o programa deve imprimir a média final do aluno, seguida
 * da mensagem "Aprovado" ou "Reprovado", conforme o critério descrito aqui.
 */

#include <stdio.h>

int Ex03Cap3(void) {
    float media, p1, p2;

    printf("Entre com a nota da P1 e da P2: \n");
    scanf("%f %f", &p1, &p2);

    media = (p1 + p2) / 2;

    if (media >= 5.0 && p1 >= 3.0 && p2 >= 3.0) {
        printf("Media: %.2f\n", media);
        printf("Aprovado!");
    } else {
        float p3;
        printf("Entre com a nota da P3: \n");
        scanf("%f", &p3);

        media = (p3 + (p1 > p2 ? p1 : p2))/2;
        if (media >= 5.0){
            printf("Media: %.2f\n", media);
            printf("Aprovado!");
        }else{
            printf("Media: %.2f\n", media);
            printf("Reprovado!");
        }
    }
    return 0;
}