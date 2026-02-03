#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &caractere);
    int caractereMin = caractere + 32;
    printf("Com o uso da tabela ASCII, obtemos o seguinte caractere minusculo: %c", caractereMin);
    return 0;
}