#include <stdio.h>
#include <stdlib.h>
int main(){

// 4.Criar um programa em C, utilizando estrutura de repetição for, para ler 10 números inteiros. Apresentar quantos números são pares e quantos números são ímpares.

    int i;
    int num;
    int par = 0;
    int impar = 0;

    i = 1;
    do{
        printf("\n\t digite um numero inteiro. %d/10: ", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
        i++;
    }while(i <= 10);
    
    printf("\n\t numeros pares: %d, numeros impares:  %d", par, impar);


    return 0;
}