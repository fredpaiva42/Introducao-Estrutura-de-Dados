/* Escreva um programa que calcule o preço da gasolina por litro no Brasil se aqui fosse adotado o mesmo preço cobrado
 * nos estados unidos. o programa deve receber como entrada, o preco do galão de gasolina nos estados unidos  e a taxa
 * de  conversão do dolar para o real, o programa deve então exibir o preço do litro da gasolina corresponde em reais.
 * sabe - se que um galão tem 3.7854 litros
 */

#include <stdio.h>

#define GALAO 3.7854

int Ex02Cap2(void) {
    float precoGalaoUSA, taxaConversaoDolar, precoLitro;

    printf("Digite o preço do galão de gasolina em doláres: \n");
    scanf("%f", &precoGalaoUSA);
    printf("Digite a taxa de conversão do dolar para o real: \n");
    scanf("%f", &taxaConversaoDolar);

    precoLitro = precoGalaoUSA * taxaConversaoDolar / GALAO;

    printf("O preço da gasolina por litro: R$ %.2f", precoLitro);

    return 0;
}
