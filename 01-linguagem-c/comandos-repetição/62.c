#include <stdio.h>

int main() {

    int total = 0;

    for(int i = 1; i <= 1000; i++) {

        int num = i;

        // Caso 1000
        if(num == 1000){
            total += 3; 
            continue;
        }

        //caso 100
        if(num == 100){
            total += 3; 
            continue;
        }

         if(num >= 100){

            int c = num / 100;

            if(c == 1) total += 5;      
            if(c == 2) total += 8;      
            if(c == 3) total += 9;      
            if(c == 4) total += 14;     
            if(c == 5) total += 11;     
            if(c == 6) total += 10;     
            if(c == 7) total += 10;     
            if(c == 8) total += 10;     
            if(c == 9) total += 10;     
            num = num % 100;
        }

        if(num >= 10 && num <= 19){

            if(num == 10) total += 3;
            if(num == 11) total += 4;
            if(num == 12) total += 4;
            if(num == 13) total += 5;
            if(num == 14) total += 8;
            if(num == 15) total += 6;
            if(num == 16) total += 9;
            if(num == 17) total += 9;
            if(num == 18) total += 8;
            if(num == 19) total += 8;

        } else {
             if(num >= 20){

                int d = num / 10;

                if(d == 2) total += 5;  // vinte
                if(d == 3) total += 6;  // trinta
                if(d == 4) total += 8;  // quarenta
                if(d == 5) total += 9;  // cinquenta
                if(d == 6) total += 8;  // sessenta
                if(d == 7) total += 7;  // setenta
                if(d == 8) total += 8;  // oitenta
                if(d == 9) total += 7;  // noventa

                num = num % 10;
            }
            if(num > 0){

                if(num == 1) total += 2;
                if(num == 2) total += 4;
                if(num == 3) total += 4;
                if(num == 4) total += 6;
                if(num == 5) total += 5;
                if(num == 6) total += 4;
                if(num == 7) total += 4;
                if(num == 8) total += 4;
                if(num == 9) total += 4;
            }
        }
    }

    printf("Total de letras: %d", total);
    return 0;
}