#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
float divisao(int x, int y);

int main()
{
    int n1 = 0;
    int n2 = 0;
    int choice;
    
    printf("Insira dois numeros... \n");
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    printf("\n----------x----------\n");

    printf("\nAgora escolha qual operacao deseja realizar:\n1) Soma\n2) Subtracao\n3) Multiplicacao\n4) Divisao\nr: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        printf("Insira um valor valido");
        return 1;
    }
    
    if (choice == 1)
    {
        int sum = soma(n1, n2);

        printf("O resultado da soma de %d com %d e igual a %d \n\n", n1, n2, sum);
    }
    
    if (choice == 2)
    {
        int sub = subtracao(n1, n2);
        printf("O resultado da subtracao de %d com %d e igual a %d \n\n", n1, n2, sub);

    }
    
    if (choice == 3)
    {
        int mult = multiplicacao(n1, n2);
        printf("O resultado da multiplicacao de %d com %d e igual a %d \n\n", n1, n2, mult);
    }
    
    if (choice == 4)
    {
        float div = divisao(n1, n2);
        printf("O resultado da divisao de %d com %d e igual a %f \n\n", n1, n2, div);

    }
    return 0;
}

int soma(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int subtracao(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}

int multiplicacao(int x, int y)
{
    int mult;
    mult = x * y;
    return mult;
}

float divisao(int x, int y)
{
    float div;
    div = x/y;
    return div;
}