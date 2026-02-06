#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, soma;
    int numAcertos = 0;

    printf("Provinha de MAT");

    //questão1
    n1 = rand() % 100;
    n2 = rand() % 100;
    printf("\nQual é a soma entre: %d e %d? ", n1, n2);
    scanf("%d", &soma);
    if (soma == (n1+n2)) {numAcertos+=1; printf("Correto!");}
    
    //questão2
    n1 = rand() % 100;
    n2 = rand() % 100;
    printf("\nQual é a soma entre: %d e %d? ", n1, n2);
    scanf("%d", &soma);
    if (soma == (n1+n2)) {numAcertos+=1; printf("Correto!");}

    //questão3
    n1 = rand() % 100;
    n2 = rand() % 100;
    printf("\nQual é a soma entre: %d e %d? ", n1, n2);
    scanf("%d", &soma);
    if (soma == (n1+n2)) {numAcertos+=1; printf("Correto!");}

    //questão4
    n1 = rand() % 100;
    n2 = rand() % 100;
    printf("\nQual é a soma entre: %d e %d? ", n1, n2);
    scanf("%d", &soma);
    if (soma == (n1+n2)) {numAcertos+=1; printf("Correto!");}

    //questão5
    n1 = rand() % 100;
    n2 = rand() % 100;
    printf("\nQual é a soma entre: %d e %d? ", n1, n2);
    scanf("%d", &soma);
    if (soma == (n1+n2)) {numAcertos+=1; printf("Correto!");}

    printf("\nNumero de acertos: %d", numAcertos);

    return 0;
}
