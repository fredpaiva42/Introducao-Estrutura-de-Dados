/* Calculadora de quatro operações */
# include <stdio.h>

int calculadoraConvencional(void) {
    float num1, num2;
    char op;

    printf("Digite: número op número\n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("= %.2f\n", num1 + num2);
            break;
        case '-':
            printf("= %.2f\n", num1 - num2);
            break;
        case '*':
            printf("= %.2f\n", num1 * num2);
            break;
        case '/':
            printf("= %.2f\n", num1 / num2);
            break;
        default:
            printf("operador invalido!\n");
            break;
    }
    return 0;
}
