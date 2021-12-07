/* Programa para converter temperatura de Celsius para fahrenheit */

# include <stdio.h> // biblioteca auxiliar de entrada e saída

int conversorParaFahrenheit(void) {
    float c; // Armazena a temperatura em celsius
    float f; // Armazena a temperatura em fahrenheit

    printf("Entre com temperatura em Celsius:");
    scanf("%f", &c); // recebe do usuário a temperatura em celsius

    // faz a conversão
    f = 1.8 * c + 32;

    // exibe resultado na tela
    printf("Temperatura em fahrenheit: %f \n", f);

    return 0;
}