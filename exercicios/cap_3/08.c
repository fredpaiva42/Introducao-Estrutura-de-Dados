/*
 * Escreva um programa para fazer conversões entre diferentes unidades. As opções
 * do programa devem ser exibidas em forma de um menu apresentado na tela, em dois
 * níveis. No primeiro nível, o usuuário escolhe a classe de unidade; no segundo nível,
 * o usuário escolhe a conversão que deseja, fornecendo então o valor a ser convertido.
 * Por fim, o programa exibe o valor resultante na tela. As opções apresentadas no
 * menu podem ser:
 *
 * 1. Peso
 *      1. Libra -> Quilograma
 *      2. Quilograma -> Libra
 *      3. Onça -> Grama
 *      4. Grama -> Onça
 *
 * 2. Volume
 *      1. Galão -> Litro
 *      2. Litro -> Galão
 *      3. Onça -> Mililitro
 *      4. Mililitro -> Onça
 *
 * 3. Comprimento
 *      1. Milha -> Quilômetro
 *      2. Quilômetro -> Milha
 *      3. Jardas -> Metro
 *      4. Metro -> Jardas
 *
 * Sabe-se que 1 libra equivale a 0.4536 kg, 1 onça a 28.3495 g, 1 galão a 3.7854 l,
 * 1 onça fluido a 29.5735 ml, 1 milha a 1.6093 Km e 1 jarda a 0.9144m.
 */

#include <stdio.h>

#define KG 0.4536f
#define G 28.3495f
#define L 3.7854f
#define ML 29.5735f
#define KM 1.6093f
#define M 0.9144f

int Ex08Cap3(void) {
    int classe, escolha, invalido = 0;
    float valor, resultado;

    printf("1. Peso\n");
    printf("    1. Libra -> Quilograma\n");
    printf("    2. Quilograma -> Libra\n");
    printf("    3. Onca -> Grama\n");
    printf("    4. Grama -> Onca\n\n");
    printf("2. Volume\n");
    printf("    1. Galao -> Litro\n");
    printf("    2. Litro -> Galao\n");
    printf("    3. Onca -> Mililitro\n");
    printf("    4. Mililitro -> Onca\n\n");
    printf("3. Comprimento\n");
    printf("    1. Milha -> Quilometro\n");
    printf("    2. Quilometro -> Milha\n");
    printf("    3. Jardas -> Metro\n");
    printf("    4. Metro -> Jardas\n\n");

    printf("Escolha a classe de unidade: \n");
    scanf("%d", &classe);
    printf("Qual conversao deseja: \n");
    scanf("%d", &escolha);
    printf("O valor que voce deseja converter: \n");
    scanf("%f", &valor);

    switch (classe) {
        case 1:
            switch (escolha) {
                case 1:
                    resultado = valor * KG;
                    break;
                case 2:
                    resultado = valor / KG;
                    break;
                case 3:
                    resultado = valor * G;
                    break;
                case 4:
                    resultado = valor / G;
                    break;
                default:
                    invalido = 1;
                    printf("Opcao de conversao invalida!");
                    break;
            }
            break;
        case 2:
            switch (escolha) {
                case 1:
                    resultado = valor * L;
                    break;
                case 2:
                    resultado = valor / L;
                    break;
                case 3:
                    resultado = valor * ML;
                    break;
                case 4:
                    resultado = valor / ML;
                    break;
                default:
                    invalido = 1;
                    printf("Opcao de conversao invalida!");
                    break;
            }
            break;
        case 3:
            switch (escolha) {
                case 1:
                    resultado = valor * KM;
                    break;
                case 2:
                    resultado = valor / KM;
                    break;
                case 3:
                    resultado = valor * M;
                    break;
                case 4:
                    resultado = valor / M;
                    break;
                default:
                    invalido = 1;
                    printf("Opcao de conversao invalida!");
                    break;
            }
            break;
        default:
            invalido = 2;
            printf("Opcao de classe invalida!");

    }

    if (!invalido)
        printf("resultado da conversao: %.4f", resultado);

    return 0;
}