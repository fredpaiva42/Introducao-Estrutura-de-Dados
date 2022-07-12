/* função troca */
# include <stdio.h>

void troca(int *px, int *py){
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int Troca (void){
    int a = 5, b = 7;
    troca(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}