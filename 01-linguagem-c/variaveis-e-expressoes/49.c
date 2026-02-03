#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao, totalSegundos;

    printf("Digite o horario de inicio (hora minuto segundo): ");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    printf("Digite a duracao da experiencia (em segundos): ");
    scanf("%d", &duracao);

    totalSegundos = hora*3600 + minuto*60 + segundo;
    totalSegundos += duracao;
    hora = (totalSegundos/3600)%24;
    minuto = (totalSegundos%3600)/60;
    segundo = totalSegundos%60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora, minuto, segundo);
    return 0;
}
