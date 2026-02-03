#include <stdio.h>
#include <stdlib.h>

int main() {
    int anoAtual, idade, anoNascimento;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    anoNascimento = anoAtual - idade;
    printf("Você nasceu em: %d", anoNascimento);
    return 0;
}