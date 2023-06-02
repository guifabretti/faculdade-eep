#include <stdio.h>

// contrabarra = \

int main(){
    int idadeJ, idadeM;
    int alturaJ, alturaM;
    int anos = 0;

    idadeJ = 10;
    alturaJ = 121;
    idadeM = 13;
    alturaM = 158;

    for (;alturaJ <= alturaM; anos++){
        alturaJ += 2;
        alturaM += 1;
    }

    printf("a) Sao necessarios %d anos para Joao ter altura maior que Maria.\n", anos);
    printf("b) Quando Joao passar a altura de Maria, Joao tera %d anos e Maria tera %d anos.\n", idadeJ + anos, idadeM + anos);
}