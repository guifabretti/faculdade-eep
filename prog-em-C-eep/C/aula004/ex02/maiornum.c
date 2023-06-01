// 2) Escreva um programa em C que leia um vetor de números inteiros e encontre o maior elemento.

#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main(){

    float num[5];
    int i, maior=num[0];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro (%d): \n", i);
        scanf("%f", &num[i]);
        if (num[i] > maior)
        {
            maior = num[i];
        }
        
    }
    printf("\n maior numero e: %d", maior);

    return 0;
}