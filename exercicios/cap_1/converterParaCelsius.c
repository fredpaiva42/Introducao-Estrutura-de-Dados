# include <stdio.h>

int main(void){
    float f;

    printf("Entre com a temperatura em fahrenheit:");
    scanf("%f",&f);

    float c;

    c = (f - 32)/1.8;

    printf("Temperatura em Celsius: %f", c);

    return 0;
}