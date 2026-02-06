#include <stdio.h>
#include <math.h>

int main() {
    char escolha;
    float calculo, x, y, z;

    printf("+=+=+= Menu =+=+=\n");
    printf("Qual operação vc deseja realizar?\n(a) Geométrica\n(b) Ponderada\n(c) Harmonica\n(d) Aritmetica");
    scanf("%c", &escolha);
    printf("Digite os valores de x, y e z (formato: x y z): ");
    scanf("%f %f %f", &x, &y, &z);

    if (escolha=='a'){ calculo=pow((x*y*z), (1/3)); printf("Média Geométrica: %.2f", calculo);}
    else if (escolha=='b'){ calculo=(x+2*y+3*z)/6; printf("Média Ponderada: %.2f", calculo);}
    else if (escolha=='c'){ calculo=1/(1/x+1/y+1/z); printf("Média Harmonica: %.2f", calculo);}
    else if (escolha=='b'){ calculo=(x+y+z)/3; printf("Média Aritmetica: %.2f", calculo);}

    return 0;
}
