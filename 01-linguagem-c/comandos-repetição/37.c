#include <stdio.h>

int main() {
    int a, b, soma, quadrado;

    for (int i = 1000; i <= 9999; i++) {
        a = i / 100;  
        b = i % 100;   

        soma = a + b;
        quadrado = soma * soma;

        if (quadrado == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
