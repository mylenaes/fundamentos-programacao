#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite os valores A B C: ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A < B + C) && (B < A + C) && (C < A + B)) {
        if (A == B && B == C) {
            printf("Com esses valores temos um triangulo equilatero");
        } 
        else if (A == B || A == C || B == C) {
            printf("Com esses valores temos um triangulo isosceles");
        } 
        else {
            printf("Com esses valores temos um triangulo escaleno");
        }
    } 
    else {
        printf("Com esses valores nao e possivel formar triangulo");
    }

    return 0;
}
