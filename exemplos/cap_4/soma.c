# include <stdio.h>

int soma (int a, int b){
    int c = a + b;
    return c;
}

int Soma (void){
    int s = soma(3,5);
    printf("Soma = %d\n", s);

    return 0;
}