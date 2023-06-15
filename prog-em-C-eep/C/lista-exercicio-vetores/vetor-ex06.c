#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    float vendas[10], comissao[10];
    char nomes[10][50]; //matriz de nomes
    float soma=0;
    float maior, menor;
    int posicaoVendedorMaior;
    int posicaoVendedorMenor;
    

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o nome do %d vendedor: ", i+1);
        fgets(nomes[i],50,stdin); //stdin é o teclado
        printf("\nDigite o valor da venda: ");
        scanf("%f", &vendas[i]);
        printf("\nDigite o valor da comissao: ");
        scanf("%f", &comissao[i]);
        fflush(stdin);
        printf("\n ------- \n");
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nVendedor: %s \n vendeu %.2f e tem comissao de %.2f\n", nomes[i], vendas[i], vendas[i]*comissao[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        soma = soma + vendas[i];
    }

    printf("\nTotal das vendas de todos os vendedores: %.2f", soma);

    maior = vendas[0];
    menor = vendas[0];

    for ( i = 0; i < 10; i++)
    {
        if (vendas[i] > maior)
        {
            maior = vendas[i];
            posicaoVendedorMaior = i;
        }
        
        if (vendas[i] < menor)
        {
            menor = vendas[i];
            posicaoVendedorMenor = i;
        }
    }
    
    printf("\nVendedor: %s teve a maior venda: %.2f", nomes[posicaoVendedorMaior],maior);
    printf("\nVendedor: %s teve a menor venda: %.2f", nomes[posicaoVendedorMenor],menor);
    
}