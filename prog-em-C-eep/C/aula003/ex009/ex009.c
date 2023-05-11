#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// contrabarra = \ 

int main(){
    char nome[50];
    int n1, n2, n3, nf, media;

    printf("Qual o seu nome? \n");
    scanf("%s",&nome);

    printf("Digite sua nota1, nota2 e nota3: \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("Digite seu numero de faltas: \n");
    scanf("%d",&nf);

    media = (n1+n2+n3)/3;

    if (media >= 7 ){
        if (nf <= 20){
            printf("%s esta aprovado!",nome);
        } else{
            printf("%s esta reprovado por faltas!",nome);
        }
    } else{
        printf("%s esta reprovado por media!",nome);
    }
}