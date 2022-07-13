# include <stdio.h>

void func (int n){
    printf("%d ", n);
    if (n > 0) { // condição de contorno
        func(n - 1);
        printf("* ");
    }
}

int recursao (void){

    func(4);

    return 0;
}