#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// contrabarra = \ 

int main(){
    char senha[12] = "batatafrita";
    // quando usar string deve-se definir a quantidade de caracteres maxima que será alocado
    // a string tem que considerar o "\0"
    char password[12];
    printf("Digite a senha: \n");
    scanf("%s",&password);

    if (strcmp(senha,password) == 0){  // o "strcmp" compara duas strings
        printf("ACESSO PERMITIDO \n");
    } else{
        printf("ACESSO NEGADO \n");
    }

return 0;
    
}
