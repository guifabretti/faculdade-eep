#include <stdio.h>
#include <stdlib.h>
int main(){
    //10.Criar um programa em C, utilizando estrutura de repetição for, que calcula e escreve a seguinte soma: soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

    int i;
    int numerador = 1;
    float denominador = 1.0;
    float soma = 0;

    for (i = 1; i <= 50; i++)
    {
        soma = soma + (numerador / denominador);
        numerador+=2;
        denominador+= 1.0;
        printf("\n\t %.2f", soma);
    }
    

    return 0;
}