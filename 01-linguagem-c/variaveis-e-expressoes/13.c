#include <stdio.h>
#include <stdlib.h>

int main() {
    float distanciaKM, distanciaM;

    printf("Digite uma distancia em Km: ");
    scanf("%f", &distanciaKM);
    distanciaM = distanciaKM / 1.61;
    printf("\nEssa distancia equivale a %.2f milhas", distanciaM);
    return 0;
}