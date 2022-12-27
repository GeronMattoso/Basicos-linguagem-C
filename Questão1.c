#include <stdio.h>

#define TAM 100//definicao do tamanho do vetor de testes

int primo(int a);//funcao recebe um numero inteiro de retorna 1 se for primo e 0 se nao for primo

int main(){

	int vet[TAM];//vetor para armazenar TAM números
	int opcao;
	int maiorprimo, j, i, k, l;
	int numeroprocurado, contador;
	
	printf ("Digite %d numeros inteiros:\n", TAM);//não há preocupacao com o usuario digitar numeros nao inteiros
	for(i=0;i<=TAM-1;i++){
		scanf("%d", &vet[i]);
	}

	do{
		printf ("\nDigite uma opcao:\n1 - Maior primo\n2 - Quantas vezes tal numero aparece\n3 - Imprimir o Vetor\n4 - Sair\n");
		scanf ("%d", &opcao);
		
		if (opcao==1){
			maiorprimo = 0;
			for(j=0;j<=TAM-1;j++){//percorre o vetor
				if(primo(vet[j])==1){//se for primo
					if(vet[j]>maiorprimo){//se for maior que o anterior, aramazena como o maior atual
						maiorprimo = vet[j];
					}
				}	
			}
			if(maiorprimo==0){
				printf("Nao ha numeros primos no vetor\n");
			}else{
				printf("maior primo do vetor e: %d\n", maiorprimo);
			}	
		}//fim opcao 1
		
		if (opcao==2){
			contador=0;
			printf("digite o numero procurado:\n");
			scanf("%d", &numeroprocurado);
			for(k=0;k<=TAM-1;k++){//percorre o vetor
				if(vet[k]==numeroprocurado){//compara o valor com os do vetor
					contador++;
				}
			}
			printf("Ha %d numero(s) %d no vetor.\n", contador, numeroprocurado);
		}//fim opcao 2
    
		if (opcao==3){
			printf("\nVetor de entrada:\n");
				for(l=0;l<=TAM-1;l++){
					printf("%d\n", vet[l]);			
				}
		}//fim opcao 3
	
		//caso o usuário escolha uma opcao não existente
		if(opcao>4){printf("\nOpcao invalida!!\n");}
}while(opcao!=4);

printf("Programa finalizado!!\n");
return 0;
}

//funcao para encotrar numero primo
int primo(int a){
	int num, resto, i; 
	resto = 0;
	num = a;

	for(i = 1; i <= num; i++){//nao pode comecar em zero senao da divisao por zero
		if(num % i == 0){
				resto++;
		}
	}
	if (resto == 2){
			return 1;
	}else{
			return 0;
	}
}
