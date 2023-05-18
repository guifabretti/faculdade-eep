/*
3. Criar um programa em C, utilizando estrutura de repetição for, para ler a idade de 5 pessoas, calcular e exibir:
a) A média das idades lidas;
b) A soma das idades lidas.
*/
#include <stdio.h>

// contrabarra = \

int main(){
    int i;
    int idade;
    int media;
    int soma = 0;

    for (i = 1; i<=5; i++){
        printf("\nDigite a idade da pessoa:");
        scanf("%d",&idade);
        soma = soma + idade;    
    }
    
    media = soma/5;

    printf("\nA soma total das idades e: %d", soma);
    printf("\nA media das idades e: %d", media);
}