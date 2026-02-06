#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero divisivel por 3 ou 5 mas nao simultaneamente pelos dois: ");
    scanf("%d", &numero);

    if ((numero%3 == 0 || numero%5==0) && !(numero%3 == 0 && numero%5==0)) { printf("Numero válido!");}
    else{ printf("Numero inválido!");}

    return 0;
}

