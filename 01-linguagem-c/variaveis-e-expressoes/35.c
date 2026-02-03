#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a, b, hipotenusa;
    printf("Digite o valor do cateto A: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto B: ");
    scanf("%f", &b);
    hipotenusa = sqrt(a*a+b*b);
    printf("A hipotenusa é igual a %.2f", hipotenusa);
    return 0;
}