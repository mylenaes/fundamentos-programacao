#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &numero);
    printf("%d\n", (numero/1000));
    printf("%d\n", ((numero/100)%10));
    printf("%d\n", ((numero%100)/10));
    printf("%d\n", (numero%10));
    return 0;
}