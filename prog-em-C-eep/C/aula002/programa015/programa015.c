#include <stdio.h>
#include <locale.h>

int main(void){
    int numero, unidade, resto, dezena, centena;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    resto = numero % 10; //divisão inteira que retona resto da divisão
    unidade = resto; //ja tenho a unidade
    resto = numero - unidade; //123 - 3 = 120
    resto = resto / 10; // 120/10 = 12
    dezena = resto % 10; // 12/10 = 2
    resto = resto - dezena; // 12 - 2 = 10
    centena = resto / 10;
    printf("/t Valor %d%d%d", unidade, dezena, centena);

    return 0;
}
