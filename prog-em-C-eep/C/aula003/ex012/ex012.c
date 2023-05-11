#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// contrabarra = \ 

int main(){
    float salario, aumento;

    printf("Digite seu salario: \n");
    scanf("%f",&salario);

    if (salario <= 600){
        aumento = salario * 1.30;
        printf("Seu salario, apos o aumento de 30 e de: %f",aumento);
    }
    if (salario >= 600.01){
       if (salario <= 1100){
        aumento = salario * 1.25;
        printf("Seu salario, apos o aumento de 25 e de: %f",aumento);
       }
    }
    if (salario >=1100.01){
        if (salario <= 2400){
        aumento = salario * 1.20;
        printf("Seu salario, apos o aumento de 20 e de: %f",aumento);
        }
    }
    if (salario >= 2400.01){
        if (salario <= 3550){
            aumento = salario * 1.15;
            printf("Seu salario, apos o aumento de 15 e de: %f",aumento);
        }
    }
    if (salario >= 3550){
        aumento = salario * 1.10;
        printf("Seu salario, apos o aumento de 10 e de: %f",aumento);
    }
}