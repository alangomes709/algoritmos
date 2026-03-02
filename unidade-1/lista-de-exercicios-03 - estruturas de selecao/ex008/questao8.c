#include<stdio.h>
int main() {
	float pt, mat, conGer, media;
	char nome[100];
	printf("Qual seu nome?");
	scanf("%s", &nome);
	printf("Nota de português:\n");
	scanf("%f", &pt);
	printf("Nota de matemática:\n");
	scanf("%f", &mat);
	printf("Nota de conhecimentos gerais\n");
	scanf("%f", &conGer);
	printf("Seus dados:");
	printf("Nome do candidato: %s", nome);
	printf("Nota de português:  .........%f\n", pt);
	printf("Nota de matemática: .........%f\n", mat);
	printf("Nota de conhecimentos gerais:  .........%f\n", conGer);
	media=(mat+pt+conGer)/3;
	printf("Média das notas de suas provas: %f\n", media);
	if(media>=7 && pt>5 && mat>5 && conGer>5){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
	return 0;
}
