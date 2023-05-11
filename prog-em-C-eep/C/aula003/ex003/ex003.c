#include <stdio.h>

int main(){
    int a, resto;
    printf("Digite um numero inteiro:");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("Numero par");
    } else{
        printf("Numero impar");
    }
    
}