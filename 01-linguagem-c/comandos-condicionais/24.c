#include <stdio.h>
#include <string.h>

int main() {
    float valorProduto;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite a sigla do estado de destino (Ex.: MG): ");
    scanf("%2s", estado);

    if (strcmp(estado, "MG") == 0) {
        valorProduto += valorProduto * 0.07;
    }
    else if (strcmp(estado, "SP") == 0) {
        valorProduto += valorProduto * 0.12;
    }
    else if (strcmp(estado, "RJ") == 0) {
        valorProduto += valorProduto * 0.15;
    }
    else if (strcmp(estado, "MS") == 0) {
        valorProduto += valorProduto * 0.08;
    }
    else {
        printf("Nao enviamos para este estado!\n");
        return 0;
    }

    printf("O valor final do produto sera: %.2f\n", valorProduto);

    return 0;
}
