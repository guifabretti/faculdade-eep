#include <stdio.h>
#include <stdlib.h>
int main(){
// 6.Criar  um  programa  em  C,  que  leia  um saldo  inicialde  uma  conta  corrente  de  um  cliente  do  banco  XYZ.  Na sequência, utilizando estrutura de repetição for, ler 5 movimentações dos clientes da seguinte forma:
//a.O usuario informa se, se trata de um depósito (D) ou de um saque (S), e na sequência, lê-se o valor.
//b.Calcular e apresentar o saldo inicial e o saldo atual.

    int i;
    char tipo;
    float saldo, valor;
    printf("\n\t digite o saldo inicial:");
    scanf("%f", &saldo);

    i = 1;
    while(i<=5){    
        printf("\n\t Selecione (s) Saque ou (d) Deposito.");
        scanf(" %c", &tipo);
        // espaço antes do % pra limpar o buffer

        if(tipo == 's'){
            printf("\n\t Digite o valor do saque:");
            scanf("%f", &valor);

            if(saldo > valor){
                saldo = saldo - valor;
            }
        else{
            printf("\n\t saldo insuficiente.");
            }
        }
        if(tipo == 'd'){
            printf("\n\t Digite o valor do deposito:");
            scanf("%f", &valor);

            saldo = saldo + valor;
        }
        printf("\n\t o valor final do saldo e: %f", saldo);
        i++;
    }

    return 0;
}