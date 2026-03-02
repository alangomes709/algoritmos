#include<stdio.h>
int main() {
	char nome1[100], nome2[100];
	float altura1, altura2, peso1, peso2;
	printf("Nome da pessoa 1:");
	scanf("%s", &nome1);
	printf("Peso da pessoa 1:\n");
	scanf("%f", &peso1);
	printf("Altura da pessoa 1");
	scanf("%f", &altura1);
	printf("Nome da pessoa 2:");
	scanf("%s", &nome2);
	printf("Peso da pessoa 2:\n");
	scanf("%f", &peso2);
	printf("Altura da pessoa 2");
	scanf("%f", &altura2);
	if(altura1>altura2){
		printf("Pesoa mais alta1: %s", nome1);
	}else if(altura2>altura1){
		printf("Pessoa mais alta2: %s", nome2);
	}
	if (peso1>peso2 )
	{
		printf("Pessoa mais pesada: %s", nome1);
	}else if(peso2>peso1){
		printf("Pessoa mais pesada: %s", nome2);
	}
	return 0;
}