#include <stdio.h>
#define N 50 //define o numero de alunos

typedef struct{
	int matricula;
	float nota1,nota2;
}alunos;

int main(){
	
	alunos aluno[N];
	float maiormedia;
	int i, j, k;
	
	maiormedia = 0.0;
	printf("Digite matricula, nota1 e nota2, para %d alunos:\n", N);

	for(i=0;i<=N-1;i++){// N-1, pois o vetor inicia em zero
		printf("\nAluno %d :\nMatricula:", i+1);//como e interface com o usuario, e mais intuitivo colocar de 1 a N por isso i+1
		scanf("%d", &aluno[i].matricula);
		printf("Nota 1: ");
		scanf("%f", &aluno[i].nota1);
		printf("Nota 2: ");
		scanf("%f", &aluno[i].nota2);
	}
	// calculo da maior media
	for(j=0;j<=N-1;j++){
		if(((aluno[j].nota1+aluno[j].nota2)/2.0)>maiormedia){
				maiormedia = (aluno[j].nota1+aluno[j].nota2)/2.0;
		}
	}
	//imprime maior media
	printf("\nA maior media foi : %f\nPara os seguite alunos:\n", maiormedia); // 0.2f mostra duas casas depois da virgula
	
	// imprime matriculas com a mesma media
	for(k=0;k<=N-1;k++){
		if(((aluno[k].nota1+aluno[k].nota2)/2.0)==maiormedia){
			printf("Matricula: %d\n", aluno[k].matricula);
		}
	}
	
	return 0;
}
