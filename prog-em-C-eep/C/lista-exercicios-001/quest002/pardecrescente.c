//2. Criar  um  programa  em  C, utilizando  estrutura  de  repetição  for,para exibir  todos  os  números  pares,  em ordem decrescente, entre 0 e 100.

#include <stdio.h>

// contrabarra = \

int main() {
    printf("Numeros pares em ordem decrescente entre 0 e 100:\n");
    for (int i = 100; i >= 0; i -= 2) {
        printf("%d, ", i);
    }
    return 0;
}
