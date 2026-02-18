#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int d1, d2, n;

    srand(time(NULL));

    printf("Lançamento de dados: ");
    printf("\nDigite quantos lançamentos você quer: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        printf("Dado 1: %d e Dado 2: %d\n", d1, d2);

        if (d1 > d2){printf("D1 > D2\n");}
        else if (d1 < d2){printf("D1 < D2\n");}
        else {printf("D1 = D2\n");}
    }

    return 0;
}
