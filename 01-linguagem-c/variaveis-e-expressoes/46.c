#include <stdio.h>

int main() {
    int numero, n1, n2, n3;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &numero);

    n1 = numero % 10;          // último dígito
    n2 = (numero / 10) % 10;   // dígito do meio
    n3 = numero / 100;         // primeiro dígito

    printf("O numero invertido fica: %d%d%d\n", n1, n2, n3);

    return 0;
}
