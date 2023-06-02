#include <stdio.h>
#include <stdlib.h>
int main(){

    // 1.Criar um programa em C, utilizando estrutura de repetição for, para exibir todos os números múltiplos de 3 entre 10 e 51, inclusive.
    
    int i;

    i = 10;
    while(i <= 51){
        if(i % 3 == 0){
            printf("\n\t multiplos de 3: %d", i);
        }
        i++;
    }

    return 0;
}