#include <stdio.h>

#define ANO 2026

int main() {

    int dia, mes, ano;

    printf("Digite sua data de nascimento no formato dd/mm/aa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if(ano <= ANO){
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
            if (dia >= 1 && dia <= 31){ printf("Data válida!");}
            else { printf("Data inválida!");}
        }
        else if (mes==4 || mes==6 || mes==9 || mes==11){
            if (dia >= 1 && dia <= 30){ printf("Data válida!");}
            else { printf("Data inválida!");}
        }
        else if (mes == 2){
            if(ano % 400 == 0 || (ano % 4 ==0  && !(ano % 100 == 0))){
                if (dia>= 1 && dia <=29) { printf("Data válida!");}
                else{ printf("Data invalida!");}
            }
            else {
                if(dia>= 1 && dia <=28) { printf("Data válida!");}
                else{ printf("Data invalida!");}
            } 
        }
    } else { printf("Data invalida!");}
    return 0;
}