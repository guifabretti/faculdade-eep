#include <stdio.h>
#include <stdlib.h>
int main(){

    // 3.Criar um programa em C, utilizando estrutura de repetição for, para ler a idade de 5 pessoas, calcular e exibir: | a.A média das idades lidas; | b.A soma das idades lidas.
    int i;
    int idade;
    int soma = 0; //variavel de soma deve começar com 0 porque vai acumular valores
    int media;

    i = 1;
    while(i <= 5){
        printf("\n\t digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma = soma + idade;

    i++;
    }
       media = soma / 5;
        printf("\n\t soma idades: %d, media idades: %d", soma, media);
    
    return 0;
}