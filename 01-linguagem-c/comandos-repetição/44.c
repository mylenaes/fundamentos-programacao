#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, prox;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d %d ", a, b);

        prox = a + b;

        while (prox <= n) {
            printf("%d ", prox);
            a = b;
            b = prox;
            prox = a + b;
        }

        printf("%d", prox);
    }

    return 0;
}
