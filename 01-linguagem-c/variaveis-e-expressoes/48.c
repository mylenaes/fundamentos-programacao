#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSegundos;

    printf("Digite um numero inteiro em segundos: ");
    scanf("%d", &totalSegundos);
    printf("Horas: %d\n", (totalSegundos/3600));
    printf("Minutos: %d\n", ((totalSegundos%3600)/60));
    printf("Segundos: %d\n", ((totalSegundos%3600)%60));
    
    return 0;
}