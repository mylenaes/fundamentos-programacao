#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x, y;
    float distancia;

    printf("Informe as coordenadas x y: ");
    scanf("%d %d", &x, &y);

    distancia = sqrt(pow(x, 2) + pow(y, 2));

    printf("A distancia até a oriem é: %.2f", distancia);

    return 0;
}