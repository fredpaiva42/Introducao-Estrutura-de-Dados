/* Escreva um programa que capture do teclado o número de segundos transcorrido num evento e imprima no formato
 * hora:minuto:segundo
 */

#include <stdio.h>

int Ex03Cap2(void) {
    int tempoEventoemS, horas, minutos;
    float segundos;

    printf("Digite o número de segundos transcorridos num evento: \n");
    scanf("%d", &tempoEventoemS);

    horas = tempoEventoemS / 3600;
    tempoEventoemS = tempoEventoemS % 3600;
    minutos = tempoEventoemS / 60;
    segundos =  tempoEventoemS % 60;

    printf("%02d:%02d:%05.2f", horas, minutos, segundos);

    return 0;
}