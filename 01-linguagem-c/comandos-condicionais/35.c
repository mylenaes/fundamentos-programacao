#include <stdio.h>

int main() {
   int dia, mes, ano;
   printf("Digite uma data no formato dd/mm/aa para averiguar sua validade: ");
   scanf("%d/%d/%d", &dia, &mes, &ano);
   if(mes>= 1 && mes<=12){
    if(mes==1 ||mes==3 ||mes==5 ||mes==7 ||mes==8 ||mes==10 ||mes==12){
        if(dia>= 1 && dia<=31){ printf("Essa data é válida!");}
        else{ printf("Essa data não é valida!");}
    }
    else if (mes==4 ||mes==6 ||mes==9 ||mes==11){
        if(dia>= 1 && dia<=30){ printf("Essa data é válida!");}
        else{ printf("Essa data não é valida!");}
    }
    else if (mes == 2) {
        if(ano % 400 == 0 || (ano % 4 ==0  && !(ano % 100 == 0))){
            if (dia>= 1 && dia <=29) { printf("Essa data é válida!");}
            else{ printf("Essa data não é valida!");}
        }
        else if(dia>= 1 && dia <=28) { printf("Essa data é válida!");}
        else{ printf("Essa data não é valida!");}
    }

   }
    return 0;
}
