#include <stdio.h>

int main() {
    int quant_numeros, numMaior, num;
    int quant_maior = 1;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quant_numeros);

    printf("\nDigite um numero: ");
    scanf("%d", &numMaior);

    for(int i = 1; i < quant_numeros; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num);

        if(num > numMaior) {
            numMaior = num;
            quant_maior = 1;
        } else if(num == numMaior) {
            quant_maior++;
        }
    }

    printf("O maior numero digitado foi: %d e apareceu %d vez(es)", numMaior, quant_maior);

    return 0;
}
