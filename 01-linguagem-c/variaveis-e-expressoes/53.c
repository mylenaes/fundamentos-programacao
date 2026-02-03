#include <stdio.h>
#include <stdlib.h>

int main() {
    float l, c, p, totalGastar;
    printf("Digite o comprimento, a largura e o valor do metro de tela para calcular quanto deve gastar(comprimento largura preco): ");
    scanf("%f %f %f", &c, &l, &p);

    totalGastar = (l*c)*p;
   
    printf("Você terá de gastar: R$ %.2f", totalGastar);
    return 0;
}