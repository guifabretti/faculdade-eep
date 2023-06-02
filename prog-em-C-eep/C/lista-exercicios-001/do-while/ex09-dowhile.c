 #include <stdio.h>
#include <stdlib.h>
int main(){
    // 9.Um frigorifico sacrifica 7 bois por dia. Para cada boi, é registradoum código e seu peso. Criar um programa em C, utilizando estrutura de repetição for, para determinar:
    // a.O boi mais gordo e seu código;
    // b.O boi mais magro e seu código;
    // c.O peso médio de todos os bois.

    float media_peso;
    float soma_peso = 0; //toda media precisa da soma
    float peso;
    int id;
    int i = 1;

    printf("\n\t digite o codigo do %d boi.", i);
    scanf("%d", &id);
    printf("\n\t digite o peso do %d boi.", i);
    scanf("%f", &peso);

    float boi_gordo = peso;
    float boi_magro = peso;
    int id_gordo = id;
    int id_magro = id;

    i = 2;
    do{
        printf("\n\t digite o codigo do %d boi.", i);
        scanf("%d", &id);
        printf("\n\t digite o peso do %d boi.", i);
        scanf("%f", &peso);

        if(peso > boi_gordo){
            boi_gordo = peso;
            id_gordo = id;
        }

        if(peso < boi_magro){
            boi_magro = peso;
            id_magro = id;
        }
        soma_peso = soma_peso + peso;
    i++;    
    }while(i <= 7);

    media_peso = soma_peso / 7;
    printf("\n\t ID boi mais gordo: %d, peso: %f", id_gordo, boi_gordo);
    printf("\n\t ID boi mais magro: %d, peso: %f", id_magro, boi_magro);
    printf("\n\t media dos pesos dos bois: %f", media_peso);

    return 0;
}