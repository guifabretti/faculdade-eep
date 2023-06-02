/*
6.  Criar  um  programa  em  C,  que  leia  um saldo  inicial de  uma  conta  corrente  de  um  cliente  do  banco  XYZ.  Na sequência, utilizando estrutura de repetição for, ler 5 movimentações dos clientes da seguinte forma:
    a) O usuario informa se, se trata de um depósito (D) ou de um saque (S), e na sequência, lê-se o valor.
    b)Calcular e apresentar o saldo inicial e o saldo atual.
*/


#include <stdio.h>

// contrabarra = \

int main(){
    float saldoInicial;
    float saldoAtual;
    float valorMovimentacao;
    char tipoMovimentacao;

    printf("Digite o saldo inicial da sua conta: ");
    scanf("%f", &saldoInicial);
    
    saldoAtual = saldoInicial;

    for (int i = 0; i < 5; i++){
        printf("Digite o tipo de movimentacao (D para deposito, S para saque): ");
        scanf(" %c", &tipoMovimentacao);

        printf("Digite o valor da movimentacao: ");
        scanf("%f", &valorMovimentacao);

        if (tipoMovimentacao == 'D' || tipoMovimentacao == 'd'){
            saldoAtual += valorMovimentacao;
        } else if (tipoMovimentacao == 'S' || tipoMovimentacao == 's'){
            saldoAtual -= valorMovimentacao;
        }        
    }
    printf("Saldo inicial: %.2f", saldoInicial);
    printf("Saldo atual: %.2f", saldoAtual);
}