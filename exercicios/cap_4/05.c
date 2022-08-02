# include <stdio.h>

int fib(int i) {
    if (!i)
        return 0;
    if (i == 1)
        return 1;
    else
        return fib(i-2) + fib(i - 1);
}

int Ex05Cap4(void) {

    printf("f(13) = ");
    for (int i = 0; i < 13; i++) {
        printf(" %d", fib(i));
    }

    return 0;
}