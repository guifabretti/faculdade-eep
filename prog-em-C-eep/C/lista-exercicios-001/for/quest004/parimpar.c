//4. Criar um programa em C, utilizando estrutura de repetição for, para ler 10 números inteiros. Apresentar quantos números são pares e quantos números são ímpares.

#include <stdio.h>

// contrabarra = \

int main(){
    int x;
    int num;
    int par = 0;
    int impar = 0;

    for (x = 1; x<=10; x++){
        printf("\nDigite um numero inteiro:");
        scanf("%d",&num); 

        if (num%2 == 0){
            par+=1;
        } else{
            impar+=1;
        }
    }
    
    printf("\nDos numeros que voce digitou, %d sao pares e %d sao impares", par, impar);
}