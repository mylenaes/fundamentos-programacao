#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero < 0) {     
        printf("O numero é invalido!");
    } else {
    double resultado = log(numero);
     printf("Logaritmo do numero: %.4f\n", resultado);
   }
    return 0;
}