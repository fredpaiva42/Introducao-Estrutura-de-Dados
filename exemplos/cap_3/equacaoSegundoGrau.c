/*
 * Raízes de equação de segundo grau
 */

# include <stdio.h>
# include <math.h>

int equacaoSegundoGrau(void) {
    double a, b, c; // coeficientes

    printf("Entre com os coeficientes (a b c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0.0) {
        double x = -c / b;
        printf("Uma raiz real: %f\n", x);
    } else {
        double delta  = b*b - 4 * a * c;
        if (delta < 0.0) {
            printf("Raizes reais inexistentes.\n");
        } else if (delta == 0){
            double x = -b / (2 * a);
            printf("Uma raiz real: %f\n", x);
        } else {
            delta = sqrt(delta);
            double x1 = (-b + delta) / (2 * a);
            double x2 = (-b - delta) / (2 * a);
            printf("Duas raizes reais: x1 = %f x2 = %f\n", x1, x2);
        }
    }
    return 0;
}