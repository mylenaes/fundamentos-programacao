#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &numero);
    if(numero >= 100 && numero <=999){
        printf("%d", (numero/100));
        printf("\n%d", (numero%100)/10);
        printf("\n%d", (numero%100)%10);
    }

    return 0;
}
