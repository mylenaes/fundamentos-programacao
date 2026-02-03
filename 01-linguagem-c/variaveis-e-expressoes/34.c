#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, areaCirculo, area;
    float pi = 3.141592;
    scanf("%f", &raio);
    area = pi*(raio*raio);
    printf("A area do circulo é igual a %.2f", area);
    return 0;
}