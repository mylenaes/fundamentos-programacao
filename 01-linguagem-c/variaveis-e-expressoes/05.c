#include <stdio.h>
#include <stdlib.h>

int main() {
    float numReal, quintaParte;
    printf("Digite um número real: ");
    scanf("%f", &numReal);
    quintaParte = numReal/5;
    printf("\nA quinta parte desse numero equivale a: %.2f", quintaParte);
    return 0;
}