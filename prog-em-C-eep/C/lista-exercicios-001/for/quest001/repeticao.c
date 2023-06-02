//1. Criar um programa em C, utilizando estrutura de repetição for, para exibir todos os números múltiplos de 3 entre 10 e 51, inclusive.

#include <stdio.h>

// contrabarra = \

int main(){
    int i;

    // for (inicio = 1; fim = ?; incremento/decremento)

    for (i=10; i<=51; i++){
        if (i%3==0){
            printf("\nValor de i: %d", i);
        }
    }
}

/*
i++  ->  incrementa de 1 em 1 na proxima linha
i--  ->  decrementa de 1 em 1 na proxima linha
++i  ->  incrementa de 1 em 1 na mesma linha
--i  ->  incrementa de 1 em 1 na mesma linha
i+=2  ->  i=i+2
i-=2  ->  i=i-2
i*=3  ->  i=i*3
*/