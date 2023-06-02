#include <stdio.h>
#include <stdlib.h>
int main(){

    // 8.Criar  um  programa  em  C,  utilizando  estrutura  de  repetição  for, que  receba  a  idade,  a  altura  e  o  peso  de  cinco pessoas, calcule e mostre:  |     a.a quantidade de pessoas com idade superior a 50 anos;   |  b.a média das alturas das pessoas com idade entre 10 e 20 anos;  |  c.a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.

    int i;
    int idade;
    float altura;
    float peso;
    int idade_sup50 = 0;
    int c_media_idade_10a20 = 0;
    float c_peso_inf40 = 0;
    float soma_h = 0;


    i = 1;
    do{
        printf("\n\t Digite a idade:");
        scanf("%d", &idade);
        printf("\n\t Digite a altura: ");
        scanf(" %f", &altura);
        printf("\n\t Digite o peso:");
        scanf(" %f", &peso);

        if(idade >= 50){
            idade_sup50++;
        }

        if(idade <= 20 && idade >= 10){
            soma_h = soma_h + altura;
            c_media_idade_10a20++;
        }

        if(peso < 40){
            c_peso_inf40++;
        }

    i++;
    }while(i <= 5);

    float media_h = c_media_idade_10a20  > 0 ? soma_h / c_media_idade_10a20 : 0.0;
    float porcent = (c_peso_inf40 / 5) * 100;

    printf("\n\t pessoas com idade maior que 50: %d, media alturas de pessoas com idade entre 10 e 20 anos: %.2f, porcentagem pessoas com menos de 40kg: %.2f", idade_sup50, media_h, porcent);


    return 0;
}