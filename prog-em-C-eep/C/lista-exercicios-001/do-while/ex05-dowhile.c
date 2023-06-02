#include <stdio.h>
#include <stdlib.h>
int main(){
    
    // Criar um programa em C, utilizando estrutura de repetição for, para ler 8 números inteiros. Apresentar quantos números se encontram no intervalo [5 e 9] e quantos se encontram fora desse intervalo.

    int i;
    int num;
    int within = 0;
    int outside = 0;

    i = 1;
    do{
            printf("\n\t digite um numero inteiro - %d/8: ", i);
            scanf("%d", &num);
        if(num >= 5 && num <= 9){
            within++;
        }
        else{
            outside++;
        }
        i++;
    }while(i<=8);

    printf("\n\t numeros entre 5 e 9: %d, numeros fora %d", within, outside);

    return 0;
}