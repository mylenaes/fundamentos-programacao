#include <stdio.h>
#include <stdlib.h>

int main() {
    float C;
    printf("Digite uma temperatura em Celcius: ");
    scanf("%f", &C);
    float F = C * (9.0 / 5.0) + 32.0;
    printf("\nA temperatura %.2f°C equivale a %.2f°F", C, F);

    return 0;
}