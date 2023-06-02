#include <stdio.h>
int main(){
    // 7.Criar  um  programa  em  C,  utilizando  estrutura  de  repetição  for,  para  resolver  a  seguinte  questão: João está atualmente com 10 anos de idade e com altura igual a 121cm. Maria está com 13 anos e com altura igual a 158cm. Supondo que João cresça 2cm por ano e Maria cresça 1cm por ano, apresente:   |  a. Quantos anos são necessários para João tenha altura maior que Maria;  |  b.A idade de João e Maria quando João passar a altura de Maria.

    int years;
    int maria_h = 158;
    int joao_h = 121;
    int joao_age = 10;
    int maria_age = 13;


    while(joao_h <= maria_h){
        maria_h++;
        joao_h+=2;
        maria_age++;
        joao_age++;

    years++;
    }

    printf("\n\t anos ate que joao alcance maria: %d", years);
    printf("\n\t quantos anos joao tera: %d e maria tera: %d", joao_age, maria_age);

    return 0;
}