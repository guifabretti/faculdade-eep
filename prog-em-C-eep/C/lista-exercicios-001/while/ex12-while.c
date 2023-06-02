#include <stdio.h>
#include <stdlib.h>
int main(){

    //12.Um  funcionário  recebe  aumento  anual.  Em  1995  foi  contratado  por  2000  reais.  Em  1996  recebeu  aumento  de 1.5%.  A  partir  de  1997,  os  aumentos  sempre  correspondem  ao  dobro  do  ano  anterior.  Faça  programa  que determine o salário atual do funcionário. Utilizar estrutura for.

    float salario = 2000;
    int ano;

    
    ano = 1996;
    while(ano <= 2023){
        float aumento = salario * 0.015;
        salario = salario + aumento;
        aumento = aumento * 2;
        salario = salario + aumento;

    ano++;
    }

    printf("\n\t salario atual = %.2f", salario);
    

    return 0;
}