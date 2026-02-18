#include <stdio.h>

int main() {
    int palindromo = 0;
    int num, original, invertido;

    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            
            num = i * j;
            original = num;
            invertido = 0;

            while(num > 0){
                invertido = invertido * 10 + num % 10;
                num /= 10;
            }

            if(original == invertido && original > palindromo){
                palindromo = original;
            }
        }
    }

    printf("O maior numero palindromo feito a partir do produto de dois numeros de 3 digitos é: %d\n", palindromo);

    return 0;
}
