#include <stdio.h>

int main() {
    double S = 0;
    double fatorial = 1;

    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            fatorial *= i;   
        }
        S += (double)i / fatorial;
    }

    printf("O valor da série, para 5 termos: %.4f\n", S);

    return 0;
}
