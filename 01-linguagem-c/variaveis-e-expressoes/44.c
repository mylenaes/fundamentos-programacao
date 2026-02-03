#include <stdio.h>
#include <stdlib.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int quantidadeDegraus;

    printf("Digite altura do degrau: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que voce quer atingir subindo a escada: ");
    scanf("%f", &alturaDesejada);

    quantidadeDegraus = alturaDesejada/alturaDegrau;

    printf("Você precisará subir %d degraus", quantidadeDegraus);
    
    return 0;
}