#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float tudo, pri, seg, ter;
    printf("dado o numero em reais de: 780.000, este sera dividido em 3 pessoas a primeira com 46 por cento a segunda com 32 por cento e a terceira com o restante do valor \n\n");
    pri=780000*0.46;
    seg=780000*0.32;
    ter=780000-(pri+seg);
    printf("O valor dos tres é de: \n O Primeiro, com 46 por cento é: %.2f \n O segundo, com 32 por cento é: %.2f \n O terceiro, com o restante é: %.2f \n\n", pri,seg, ter);
}
