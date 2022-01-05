#include <stdio.h>

float celsius_fahrenheit (float c) {
    float f;
    f = 1.8 * c + 32;
    return f;
}

int usandoFuncao(void) {
    float c, f;

    printf("Entre com a temperatura em Celsius: \n");
    scanf("%f", &c);

    f = celsius_fahrenheit(c);

    printf("Temperatura em Fahrenheit: %.0f\n", f);
    return 0;
}