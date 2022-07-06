# include <stdio.h>

# define PI 3.14159

float volume_cilindro (float r, float h){
    float v;
    v = PI * r * r * h;
    return v;
}

int exemploVolumeCilindro (void){
    float raio, altura, volume;

    printf("Entre com o valor do raio e da altura:");
    scanf("%f %f", &raio, &altura);

    volume = volume_cilindro(raio, altura);

    printf("Volume do cilindro = %f\n", volume);
    return 0;
}