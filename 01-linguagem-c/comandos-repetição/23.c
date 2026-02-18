#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        printf("Numero invalido!\n");
    }

    return 0;
}
