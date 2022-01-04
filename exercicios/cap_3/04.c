/*
 * Escreva  um programa que converta coordenadas polares (raio r e ângulo a) em
 * coordenadas cartesianas (abscissa x e ordenada y), de acordo com as fórmulas:
 *
 *                                    x = r cos(a)
 *                                    y = r sin(a)
 *
 * O programa deve capturar os valores em coordenadas polares e exibir as coor-
 * denadas cartesianas correspondentes. As funções sin e cos estão disponíveis na
 * biblioteca matemática padrão.
 */

#include <stdio.h>
#include <math.h>

int Ex04Cap3(void) {
    float raio, angulo, x, y;
    printf("Entre com as coordenadas polares (raio e angulo a): \n");
    scanf("%f %f", &raio, &angulo);

    x =  raio * cos(angulo);
    y =  raio * sin(angulo);

    printf("Coordenadas cartesianas: (%.1f, %.1f)", x, y);

    return 0;
}