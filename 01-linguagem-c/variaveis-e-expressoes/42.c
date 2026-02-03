#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioBase, salarioFinal;
    printf("Digite seu salario: ");
    scanf("%f", &salarioBase);
    salarioFinal = salarioBase - (salarioBase*0.07) + (salarioBase*0.05);
    printf("\nVoce receberá: %.2f", salarioFinal);
    
    return 0;
}