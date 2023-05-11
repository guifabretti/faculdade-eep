#include <stdio.h>
#include <stdlib.h>

// barra invertida: \

// Desenvolver um programa que solicite duas notas e calcule a média
//Média



int main()
{
    //Declaração de variaveis
    float media, nota1, nota2,nota3,nota4;
    //entrada de dados
    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);
    printf("Digite a nota 3: \n");
    scanf("%f", &nota3);
    printf("Digite a nota 4: \n");
    scanf("%f", &nota4);
    //processamento
    media=  (nota1+nota2+nota3+nota4)/4;
    //saida de dados
    printf("A media e: %0.2f", media);
}
