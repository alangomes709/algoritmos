#include<stdio.h>
int main(){
	float n;
	printf("Digite um número inteiro para saber a classificação dele: F1, F2, F3\n");
	scanf("%f", &n);
	if(n<=10){
		printf("F1");
	}else if(n>10 && n<=100){
		printf("F2");
	}else if (n>100){
		printf("F3");
	}
	return 0;
}