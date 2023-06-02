#include <stdio.h>
#include <stdlib.h>
int main(){

// 13.Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com a menor quantidadede notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.Utilizar estrutura for.

    int valor;
	int nota100 = 0;
	int nota50 = 0;
	int nota20 = 0;
	int nota10 = 0;
	int nota5 = 0;
	int nota2 = 0;
	int moeda1 = 0;

	printf("\n\t digite o valor do saque: ");
	fflush(stdout);
	scanf("%d", &valor);

	if(valor > 0){

        do{
			if(valor >= 100){
				nota100 ++;
				valor = valor - 100; 
			}else{
				if(valor >= 50){
					nota50 ++;
					valor = valor - 50; 
				}else{
					if(valor >= 20){
						nota20 ++;
						valor = valor - 20; 
					}else{
						if(valor >= 10){
							nota10 ++;
							valor = valor - 10; 
						}else{
							if(valor >= 5){
								nota5 ++;
								valor = valor - 5; 
							}else{
								if(valor >= 2){
									nota2 ++;
									valor = valor - 2;
								}else{
									moeda1 ++;
									valor = valor - 1;
								}
							}
						}
					}
				}
			}
		}while(valor > 0);

		printf("\n\t quantidade de notas: ");

		if(nota100 > 0 && nota100 < 2){
			printf("\n\t %d nota de R$ 100", nota100);
		}else{
			if(nota100 > 1){
				printf("\n\t %d notas de R$ 100", nota100);
			}
		}
		if(nota50 > 0 && nota50 < 2){
			printf("\n\t %d nota de R$ 50", nota50);
		}else{
			if(nota50 > 1){
				printf("\n\t %d notas de R$ 50", nota50);
			}
		}
		if(nota20 > 0 && nota20 < 2){
			printf("\n\t %d nota de R$ 20", nota20);
		}else{
			if(nota20 > 1){
				printf("\n\t %d notas de R$ 20", nota20);
			}
		}
		if(nota10 > 0 && nota10 < 2){
			printf("\n\t %d nota de R$ 10", nota10);
		}else{
			if(nota10 > 1){
				printf("\n\t %d notas de R$ 10", nota10);
			}
		}
		if(nota5 > 0 && nota5 < 2){
			printf("\n\t %d nota de R$ 5", nota5);
		}else{
			if(nota5 > 1){
				printf("\n\t %d notas de R$ 5", nota5);
			}
		}
		if(nota2 > 0 && nota2 < 2){
			printf("\n\t %d nota de R$ 2", nota2);
		}else{
			if(nota2 > 1){
				printf("\n\t %d notas de R$ 2", nota2);
			}
		}
		if(moeda1 > 0 && moeda1 < 2){
			printf("\n\t %d moeda de R$ 1", moeda1);
		}else{
			if(moeda1 > 1){
				printf("\n\t %d moedas de R$ 1", moeda1);
			}
		}

	}else{
		printf("\n\t valor invalido para saque.");
	}


    return 0;
}

