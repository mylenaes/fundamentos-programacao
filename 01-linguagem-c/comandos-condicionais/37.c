#include <stdio.h>

int main() {
    int hEnt, mEnt, hSai, mSai;
    int entradaMin, saidaMin, duracaoMin;
    int horas;
    float valor = 0;

    printf("Digite o horario de entrada (hh mm): ");
    scanf("%d %d", &hEnt, &mEnt);
    printf("Digite o horario de saida (hh mm): ");
    scanf("%d %d", &hSai, &mSai);

    entradaMin = hEnt * 60 + mEnt;
    saidaMin = hSai * 60 + mSai;

    if (saidaMin < entradaMin) { saidaMin += 24 * 60;}

    duracaoMin = saidaMin - entradaMin;

    horas = duracaoMin / 60;
    if (duracaoMin % 60 != 0) { horas++;}

    if (horas >= 1) valor += 1;
    if (horas >= 2) valor += 1;
    if (horas >= 3) valor += 1.4;
    if (horas >= 4) valor += 1.4;
    if (horas >= 5) valor += (horas - 4) * 2;

    printf("\nTempo estacionado: %d hora(s)", horas);
    printf("\nValor a pagar: R$ %.2f\n", valor);

    return 0;
}
