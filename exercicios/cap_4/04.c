# include <stdio.h>
# include <math.h>

double pot(double x, int k);

int Ex04Cap4 (void){
    double x;
    int k;

    scanf("%lf %d", &x, &k);

    printf("%g^%d = %g", x, k, pot(x, k));
}

double pot(double x, int k) {
    if (!k)
        return 1;
    else{
        return x * pot(x, k-1);
    }
}
