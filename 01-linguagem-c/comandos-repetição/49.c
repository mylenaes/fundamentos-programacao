#include <stdio.h>

int main() {
    float vCarlos = 1000;
    float vJoao = vCarlos / 3.0;
    int quantMeses = 0;

    while(vJoao < vCarlos){
        vCarlos += vCarlos * 0.02;
        vJoao += vJoao * 0.05;
        quantMeses++;
    }

    printf("\nSao necessarios %d meses para que o salario de Joao se iguale ou ultrapasse o de Carlos\n", quantMeses);

    return 0;
}
