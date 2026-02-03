#include <stdio.h>
#include <stdlib.h>

int main() {
    float velocidadeKMH, velocidadeMS;
    printf("Digite uma veloccidade em km/h: ");
    scanf("%f", &velocidadeKMH);
    velocidadeMS = velocidadeKMH / 3.6;
    printf("\nA velocidade %.2f km/h equivale a %.2f m/s", velocidadeKMH, velocidadeMS);

    return 0;
}