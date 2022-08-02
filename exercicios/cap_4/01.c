# include <stdio.h>

int calculaMDC(int x, int y);

int Ex01Cap4(void){
    int x, y, z, mdc;

    scanf("%d %d %d", &x, &y, &z);

    mdc = calculaMDC(calculaMDC(x,y), z);

    printf("MDC(%d, %d, %d): %d\n", x, y, z, mdc);

    return 0;
}

int calculaMDC(int x, int y) {
    int r = x % y;
    if (r == 0)
        return y;
    else
        return calculaMDC(y, r);
}
