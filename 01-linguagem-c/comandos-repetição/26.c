#include <stdio.h>

int main() {
    int theNumber;
    printf("Digite um valor: ");
    scanf("%d", &theNumber);
    theNumber++;
    while(!(theNumber % 11 == 0 || theNumber % 13 == 0 || theNumber % 17 == 0)) {
        theNumber++;
    }
    printf("O primeiro múltiplo de 11, 13 ou 17 após o número dado: %d", theNumber);

    return 0;
}
