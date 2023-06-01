// 4) Escreva um programa em C que leia dois vetores de números inteiros e verifique se eles são iguais

#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main(){

    float num[2];
    int i;

    for (i = 0; i < 2; i++){
        printf("Digite um numero inteiro (%d): \n", i);
        scanf("%f", &num[i]);
    }

    if (num[0] == num[1]){
        printf("Os numeros sao iguais");
    } else{
        printf("Os numeros sao diferentes");
    }
    

    return 0;
}