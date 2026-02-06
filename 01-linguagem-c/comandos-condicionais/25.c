#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a, b e c (formato: a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b,2)-4*a*c;

    if (delta<0) { printf("Não existe raiz");}
    else if (delta==0) { x1 = (-b - sqrt(delta))/(2*a); printf("%.2f", x1);}
    else if (delta > 0) { x1 = (-b + sqrt(delta))/(2*a); x2 = (-b - sqrt(delta))/(2*a); printf("x1: %.2f e x2: %.2f", x1, x2);}
    
    return 0;
}
