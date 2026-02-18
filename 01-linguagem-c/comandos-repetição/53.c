#include <stdio.h>

int main() {
    int n;
    int num = 1;

    printf("Digite um valor para n e veja o triangulo de floyd: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    
    return 0;
}
