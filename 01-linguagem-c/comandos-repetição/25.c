#include <stdio.h>

int main() {
    int soma = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 && i % 5 == 0) {soma += i;}
    }
    printf("A soma de todos os numeros naturais abaixo de 1000 que são multiplos de 3 e 5: %d", soma);
    return 0;
}
