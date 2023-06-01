// 1) Escreva um programa em C que leia um vetor de números inteiros e determine a soma de todos os elementos.

#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main(){

    int i, soma=0;
    float num[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro (%d): \n", i);
        scanf("%f", &num[i]);
        soma = soma + num[i];
    }
    printf("\n A soma de todos os numeros e: %d", soma);

    return 0;
}