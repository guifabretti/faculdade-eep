#include <stdio.h>
#include <stdlib.h>
int main(){

    // 2.Criar  um  programa  em  C, utilizando  estrutura  de  repetição  for,para exibir  todos  os  números  pares,  em ordem decrescente, entre 0 e 100.

    int i;

    printf("\n\t Os numeros pares de 100 a 0 sao:");

    i = 100;
    do{
        printf("\n\t %d", i);
        i-=2;
    }while(i >= 0);

    
    return 0;
}