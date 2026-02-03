#include <stdio.h>
#include <stdlib.h>

int main() {
    float aposta1, aposta2, aposta3, apostaTotal, valorPremio;

    printf("Digite o valor da posta 1: ");
    scanf("%f", &aposta1);
    printf("Digite o valor da posta 2: ");
    scanf("%f", &aposta2);
    printf("Digite o valor da posta 3: ");
    scanf("%f", &aposta3);
    printf("Digite o valor do premio: ");
    scanf("%f", &valorPremio);

    apostaTotal = aposta1 + aposta2 + aposta3;
    aposta1 = aposta1*100/apostaTotal;
    aposta2 = aposta2*100/apostaTotal;
    aposta3 = aposta3*100/apostaTotal;

    printf("\nA primeira aposta deve receber: %.2f", (valorPremio*(aposta1/100)));
    printf("\nA segunda aposta deve receber: %.2f", (valorPremio*(aposta2/100)));
    printf("\nA terceira aposta deve receber: %.2f", (valorPremio*(aposta3/100)));
    return 0;
}