# include <stdio.h>
# include <math.h>

int raizes (double a, double b, double c, double *px1, double *px2);

int Ex03Cap4(void) {
    double a, b, c, r1, r2;
    int n;

    printf("Entre com os coeficientes (a b c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    n = raizes(a, b, c, &r1, &r2);

    if (!n)
        printf("Raizes reias inexistentes.\n");
    else if (n == 2)
        printf("Duas raizes reias: x1 = %g x2 = %g\n", r1, r2);
    else
        printf("Uma raiz real: %g\n", r1);

    return 0;
}

int raizes(double a, double b, double c, double *px1, double *px2){

    if (a == 0){
        *px1 = -c/b;
        return 1;
    }

    double delta = pow(b, 2) - 4 * a * c;
    if (delta < 0)
        return 0;
    else if(delta == 0){
        *px1 = -b/(2*a);
        return 1;
    }else {
        delta = sqrt(delta);
        *px1 = (-b + delta) / (2 * a);
        *px2 = (-b - delta) / (2 * a);
        return 2;
    }
}