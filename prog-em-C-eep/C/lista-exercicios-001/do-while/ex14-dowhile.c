#include <stdio.h>
#include <stdlib.h>
int main(){

    //14.Criar um programa em C, utilizando estrutura de repetição for, que leia o sexo (f ou m) , a cor dos olhos(v-verdes c-castanhos -ou a-azuis) e a idade da pessoa. Fazer a leitura de 6 pessoas. Apresentar:
    // a.Quantidade de pessoas com olhos verdes
    // b.Quantidade de pessoas com olhos castanhos
    // c.Quantidade de pessoas com olhos azuis
    // d.Quantidade de pessoas do sexo feminino (f) com cor de olhos verdes
    // e.Quantidadede pessoas do sexo masculino com cor de olhos azuis
    // f.Porcentagem de pessoas do sexo feminino com cor de olhos castanhos

    int i;
    char sexo;
    char cor;
    int idade;
    int resp_a = 0, resp_b = 0, resp_c = 0, resp_d = 0, resp_e = 0, resp_f = 0, qtd_mulheres = 0;
    float porcentagem;

    i = 1;
    do{
        printf("\n\t digite o sexo (m) masculino, (f) feminino da pessoa %d: ", i);
        fflush(stdin);
        scanf("%c", &sexo);
        printf("\n\t digite a cor dos olhos (c) castanho, (v) verde, (a) azul, da pessoa %d: ", i);
        fflush(stdin);
        scanf("%c", &cor);
        printf("\n\t digite a idade da pessoa %d: ", i);
        fflush(stdin);
        scanf(" %d", &idade);


        if(cor =='v'){
            resp_a++;
        }

        if(cor =='c'){
        resp_b++;
        }

        if(cor =='a'){
        resp_c++;
        }

        if(sexo == 'f' && cor == 'v'){
            resp_d++;
        }

        if(sexo == 'm' && cor == 'a'){
            resp_e++;
        }

        if(sexo == 'f' && cor == 'c'){
            resp_f++;
        }

        if(sexo == 'f'){
            qtd_mulheres++;
        }
    i++;
    }while(i <= 6);

    porcentagem = (resp_f  * 100) / qtd_mulheres;

    printf("\n\t respostas:");
    printf("\n\t a) pessoas com olhos verdes: %d", resp_a);
    printf("\n\t b) pessoas com olhos castanhos: %d", resp_b);
    printf("\n\t c) pessoas com olhos azuis: %d", resp_c);
    printf("\n\t d) mulheres com olhos verdes: %d", resp_d);
    printf("\n\t e) homens com olhos azuis: %d", resp_e);
    printf("\n\t f) mulheres com olhos castanhos: %.2f", porcentagem);


    return 0;
}