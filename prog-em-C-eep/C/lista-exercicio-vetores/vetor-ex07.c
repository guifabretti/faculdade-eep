#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    int num[10] = {1,-2,3,-4,5,6,7,-8,9,10};
    int somaP=0, somaN=0;

    for ( i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            somaP = somaP + 1;
        } else{
            somaN = somaN + 1;
        }
    }
    
    printf("\n\n existe:\n %d numeros positivos\n %d numeros negativos \n\n", somaP, somaN);
}