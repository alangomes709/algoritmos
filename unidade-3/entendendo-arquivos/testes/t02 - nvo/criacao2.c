#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void visualizar(char nomearq[]);
void sobrescrever(char nomearq[]);
void adicionar_conteudo(char nomearq[]);

int main(){
	char nomearq[20];
	char escolha;
	printf("Nome do arquivo: ");
	scanf("%s", &nomearq);
	printf("O que deseja fazer?\n");
	printf("n - novo registro\nv - visualizar\no - sobrescrever\nq - sair ");
	scanf(" %c", &escolha);
	switch(escolha){
		case 'n':
			adicionar_conteudo(nomearq);
			break;
		case 'v':
			visualizar(nomearq);
			break;
		case 'o':
			sobrescrever(nomearq);
			break;
		case 'q':
			return 0;
		default:
			printf("Insira a opcao adequada");
			break;
	}
	system("pause");
	return 0;
}

void visualizar(char nomearq[]){
	FILE *arq;
	char content[1000];
	arq=fopen(nomearq, "r");
	if(arq==NULL){
		printf("Erro ao abrir\n");
		exit(1);
	}
	while(fgets(content, 1000, arq)!=NULL){
		printf("%s", content);
	}
	fclose(arq);
	return;
}

void sobrescrever(char nomearq[]){
	char escolha;
	printf("Tem certeza que deseja sobrescrever? esta acao nao pode ser desfeita.\nProsseguir? - s/n");
	scanf(" %c", &escolha);
	if(escolha!='s'){
		return;
	} else {
		FILE *arq;
		char content[1000];
		arq=fopen(nomearq, "w");
		if(arq==NULL){
			printf("Erro ao abrir\n");
			exit(1);
		} else{
			printf("Insira conteúdo: \n");
			scanf("%c");
			fgets(content, 1000, stdin);
			fprintf(arq,"%s", content);
			fclose(arq);
		}
		printf("Seu registro foi salvo");
	}
	return;
}


void adicionar_conteudo(char nomearq[]){
	FILE *arq;	
	char chave;
	char content[1000];
	arq=fopen(nomearq, "a+");
	if(arq==NULL){
		printf("Erro ao abrir\n");
		exit(1);
	} 
	while(fgets(content, 1000, arq)!=NULL){
		printf("%s", content);
	}
	do{
		printf("Insira conteúdo: \n");
		scanf("%c");
		fgets(content, 1000, stdin);
		fprintf(arq,"%s", content);
		printf("Sair? - s\nContinuar? - qualquer letra(exceto s) ");
		scanf("%c", &chave);
	}while(chave!='s');
	fclose(arq);
	printf("Seu registro foi salvo");
	return;
}