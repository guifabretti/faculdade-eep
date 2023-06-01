// 3) Escreva um programa em C que leia um vetor de números inteiros e calcule a média dos elementos.

#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main(){

    float num[5], media;
    int i, soma=0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro (%d): \n", i);
        scanf("%f", &num[i]);
        soma = soma + num[i];
    }

    media = soma/5;

    printf("\n A media dos numeros e: %.2f", media);

    return 0;
}