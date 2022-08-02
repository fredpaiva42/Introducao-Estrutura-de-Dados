# include <stdio.h>
# include <math.h>

# define PI 3.14159

float calculaVolumeEsfera(float raio){
    float volume;
    volume = 4.0/3 * PI * pow(raio, 3);

    return volume;
}

float calculaVolumeCalota (float raio, float altura){
    float volume;
    volume = 1.0/3 * PI * pow(altura, 2) * (3 * raio - altura);

    return volume;
}

float calculaVolumeCilindro (float raio, float altura) {
    float volume;
    volume = PI * pow(raio, 2) * altura;
    return volume;
}

float calculaVolumeTotal(float dEsfera, float dCalota, float hCalota){
    float volume, alturaCilindro, raioEsfera, raioCalota;
    raioEsfera = dEsfera / 2;
    raioCalota = dCalota / 2;
    alturaCilindro = dEsfera - 2 * hCalota;

    float volumeCalota = calculaVolumeCalota(raioEsfera, hCalota);
    float volumeCilindro = calculaVolumeCilindro(raioCalota, alturaCilindro);
    float volumeEsfera = calculaVolumeEsfera(raioEsfera);
    volume =  volumeEsfera - ((2 * volumeCalota) + volumeCilindro);

    return volume;
}

int Ex02Cap4 (void) {

    float diametroEsfera, diametroCalota, alturaCalota, volumePeca;

    scanf("%f %f %f", &diametroEsfera, &diametroCalota, &alturaCalota);

    volumePeca = calculaVolumeTotal(diametroEsfera, diametroCalota, alturaCalota);

    printf("Volume: %f", volumePeca);

    return 0;
}