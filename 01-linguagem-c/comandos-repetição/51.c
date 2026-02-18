#include <stdio.h>

int main() {
    double salario = 2000;
    double percentual = 0.015;

    for(int ano = 1996; ano <= 2026; ano++){
        salario += salario * percentual;
        percentual *= 2;
    }

    printf("O salario atual do funcionario e: %.2lf\n", salario);

    return 0;
}
