#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float notaFinal, notaLab, notaAS, notaAF;
    printf("Digite as notas do laboratório, Av. semestral e Ex. final (n1 n2 n3): ");
    scanf("%f %f %f", &notaLab, &notaAS, &notaAF);

    notaFinal = notaLab*0.2+notaAS*0.3+notaAF*0.5;

    if (notaFinal >= 0 && notaFinal <= 2.9) { printf("Reprovado!");} 
    else if (notaFinal >= 3.0 && notaFinal <= 4.9) {printf("Recuperação!");}
    else if (notaFinal >= 5.0) {printf("Aprovado!");}

    return 0;
}