#include <stdio.h>
#include <stdlib.h>
int main(){
    // 11.Criar um programa em C, utilizando estrutura de repetição for, que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não.

    int num;
    int i;
    int primo = 1;

    printf("\n\t digite um numero inteiro:");
    scanf("%d", &num);


    i = 2;
    while(i <= num / 2){

        if (num % i == 0) { //se o num dividido por qualquer outro numero = 0, ent n é primo
            primo = 0;
            break;
        }
    ++i;    
    }
    if (primo == 1)
            printf("\n\t %d e primo.", num);
        else
            printf("\n\t %d nao e primo.", num);

    return 0;
}