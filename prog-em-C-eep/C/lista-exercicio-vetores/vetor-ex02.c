#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    float num[7];
    int muldois;
    int multres;
    int ambos;
    
    for (i = 0; i < 7; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &num[i]);
    }

    printf("\nNumeros multiplos por dois: ");
    for (i = 0; i < 7; i++) {
        if ((int)num[i] % 2 == 0)
        {
            printf("%.0f, ", num[i]);
            muldois++;
        } 
    }
    printf("\nNumeros multiplos por tres: ");
    for (i = 0; i < 7; i++) {
        if ((int)num[i] % 3 == 0)
        {
            printf("%.0f, ", num[i]);
            multres++;
        } 
    }
    printf("\nNumeros multiplos por dois e tres: ");
    for (i = 0; i < 7; i++) {
        if ((int)num[i] % 3 == 0 && (int)num[i] % 2 == 0)
        {
            printf("%.0f, ", num[i]);
            ambos++;
        } 
    }
}