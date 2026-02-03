#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorDigitado, totalPagar, valorParcela, comissaoAVista, comissaoParcelado;
    printf("*-*-Programa de ajuda para vendedores-*-*");
    printf("\nDigite um valor: ");
    scanf("%f", &valorDigitado);
    totalPagar = valorDigitado - valorDigitado*0.1;
    valorParcela = valorDigitado/3;
    comissaoAVista = totalPagar*0.05;
    comissaoParcelado = valorDigitado*0.05;

    const char *mensagem =
    "O total a pagar com desconto de 10%%: %.2f\n"
    "O valor de cada parcela, no parcelamento de 3x sem juros: %.2f\n"
    "A comissão do vendedor, no caso da venda ser a vista: %.2f\n"
    "A comissão do vendedor, no caso da venda ser parcelada: %.2f\n";

    printf(mensagem,
        totalPagar,
        valorParcela,
        comissaoAVista,
        comissaoParcelado);


    return 0;
}