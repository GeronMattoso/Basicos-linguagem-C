#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int somadiagonal(int matriz[TAM][TAM]);

int main(){
	int matriz[TAM][TAM];
	int i, j;
	
	//preencher com numeros inteiros e aleatórios entre -20 e 20
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			matriz[i][j] = (-(rand()%20))+((rand()%20));// numeros entre -20 e 20
		}
	}
		
	//imprimir a matriz
	for(i=0;i<TAM;i++){
		printf("\n");
		for(j=0;j<TAM;j++){
			printf("[%d]  ", matriz[i][j]);
		}
	}
	//chama a funcao e já imprrime o retorno dela
	printf("\n\nSoma do numeros abaixo e diagonal principal: %d", somadiagonal(matriz));
}

//funcao soma dos numeros abaixo da diagonal principal
int somadiagonal(int matriz[TAM][TAM]){
	int soma = 0;
	int i, j;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i>=j){
				soma = soma+matriz[i][j];
			}else{
				soma = soma;
			}
		}
	}

	return soma;
}
