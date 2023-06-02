// 5. Criar um programa em C, utilizando estrutura de repetição for, para ler 8 números inteiros. Apresentar quantos números se encontram no intervalo [5 e 9] e quantos se encontram fora desse intervalo.

#include <stdio.h>

// contrabarra = \

int main(){
    int x;
    int num;
    int dentro = 0;
    int fora = 0;

    for (x=1;x<=8;x++){
        printf("\nDigite um numero: ");
        scanf("%d", &num);

        if (num>=5 && num<=9){
            dentro++;
        } else{
            fora++;
        }
    }
    printf("\nA quantidade de numeros DENTRO do intervalo de [5-9] sao: %d", dentro);
    printf("\nA quantidade de numeros FORA do intervalo de [5-9] sao: %d", fora);
}