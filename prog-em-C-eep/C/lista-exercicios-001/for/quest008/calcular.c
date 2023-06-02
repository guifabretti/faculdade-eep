#include <stdio.h>

// contrabarra = \n

int main(){
    int idade;
    int qntd50anos = 0;
    int qntd40kg = 0;
    float mediaalturas;
    float peso;
    float altura;
    int totalpessoas = 5;

    for (int i = 0; i < totalpessoas; i++)
    {
        printf("Digite a idade da pessoa %d: ",i+1);
        scanf("%d", &idade);

        printf("Digite a altura (em cm) da pessoa %d: ", i+1);
        scanf("%f", &altura);

        printf("Digite o peso (em kg) da pessoa %d: ", i+1);
        scanf("%f", &peso);

        if (idade > 50)
        {
            qntd50anos++;
        }
        
        
        if (idade >= 10 && idade <= 20)
        {
            mediaalturas += altura;
        }

        if (peso <= 40)
        {
            qntd40kg++;
        }
        
        
    }
    // a)
    printf("\n Ha %d pessoas com mais de 50 anos \n", qntd50anos);

    // b)
    mediaalturas = mediaalturas/qntd50anos;
    printf("\n A media das alturas de pessoas com idade entre 10 e 20 anos e: %.1f \n", mediaalturas);

    // c)
    float porcento40kg = (qntd40kg*100)/5;
    printf("\n A porcentagem de pessoas com peso inferior a 40kg e de: %.1fporcento \n", porcento40kg);
}