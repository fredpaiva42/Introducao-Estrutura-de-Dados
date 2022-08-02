# include <stdio.h>

int coeficiente(int n, int k) {

    if (n < k)
        return 0;

    if (n == k || k == 0)
        return 1;

    return coeficiente(n-1, k) + coeficiente(n-1, k-1);
}

int Ex06Cap4(void) {
    int n, k;

    scanf("%d %d", &n, &k);

    printf("Coeficiente Binomial: %d", coeficiente(n, k));

    return 0;
}