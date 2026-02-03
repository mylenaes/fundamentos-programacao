#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorReal, valorDolar;
    printf("Digite um valor em real: ");
    scanf("%f", &valorReal);
    valorDolar = valorReal*0.19;
    printf("Esse valor em dolares equivale a: R$%.2f", valorDolar);
    return 0;
}


