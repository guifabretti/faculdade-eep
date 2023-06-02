#include <stdio.h>
#include <stdlib.h>
int main(){

    //15.Criar um programa em C, utilizando estrutura de repetição for, para ler uma senha numérica de 6 dígitos e informar ao usuário: “acesso permitido” ou “acesso negado”. Gerenciar as entradas para que não possam ser digitadas mais do que três tentativas invalidas.

    char password[12];
    char right_password[12] = "tsaicute";
    int incorrect_password;
    int i;

    i = 1;
    while(i <= 3){
        printf("\n\t digite a senha:");
        scanf("%s", &password);

        if(strcmp(right_password, password) == 0){
            printf("\n\t acesso permitido.");
            break;
        }
        else{
           printf("\n\t acesso negado."); 
           incorrect_password++;
        }

        if(incorrect_password == 3){
            printf("\n\t o numero de tentativas foram excedidas.");
        }
    i++;
    }

    return 0;
}