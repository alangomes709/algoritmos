#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void leitura (char nomearq[]){
	FILE *something;
	char mini[50];
	something=fopen(nomearq, "r");
	if(something==NULL){
		printf("Erro arq");
		exit(1);
	}
	while(fgets(mini, 50, something)!=NULL){
		printf("%s\n", mini);
	}
	fclose(something);
}

void sobrescrever(char nomearq[]){

}

int main(){
	
	FILE *arq;
	
	char escolha;
	char nomearq[50];
	char content[1000];
	
	arq=fopen(arq, "w");
	
	
	printf("Insira o nome do arquivo: ");
	scanf("%s", &nomearq);
	printf("Insira o conteúdo: ");
	fgets(content, 1000, stdin);
	fputs(content, stdout);
	
//	printf("O que fazer? ");
//	scanf(" %c", &escolha);
//	switch(escolha){
//		case 'l':
//			leitura(nomearq);
//			break;
//		case 'e':
//			sobrescrever(nomearq);
//			break;
//		case 'q':
////			sair(nomearq)
//			break;
//	}
	
	system("pause");
	return 0;
}