#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0;
    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &numero);
    if (numero > 0) { 
        while(numero > 0){
            soma += numero%10;
            numero = numero/10;
        }
        printf("A soma dos algarismos deste numero resulta em: %d", soma);
    } else {
       printf("O numero é invalido!");
   }
    return 0;
}