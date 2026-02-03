#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, somaQuadrados;
    printf("Digite o valor 1: ");
    scanf("%f", &n1);
    printf("\nDigite o valor 2: ");
    scanf("%f", &n2);
    printf("\nDigite o valor 3: ");
    scanf("%f", &n3);
    somaQuadrados = n1*n1 + n2*n2 + n3*n3;
    printf("\nA soma dos quadrados é igual a: %.2f", somaQuadrados);
    return 0;
}