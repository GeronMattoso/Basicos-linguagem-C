#include <stdio.h>

float funcaoS (float n);
float fatorial(float n);

int main(){
	int n;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	if(n<0){
		return -1;
	}
	printf("%f\n", funcaoS(n));
}

// calculo do S
float funcaoS(float n){
	float soma=1, num = n;

	if(num==0){return soma;}
	soma = 1/(fatorial(num)) + funcaoS(num-1);
	
	return soma;
}

// calculo do fatorial
float fatorial(float n){
	float fat, num;
	
	num=n;
	for(fat = 1; num > 1; num = num - 1){
		fat = fat * num;
	}
	
	return fat;
}
