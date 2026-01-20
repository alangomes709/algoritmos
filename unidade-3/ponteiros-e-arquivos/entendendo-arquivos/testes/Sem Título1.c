#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *something;
	char nomearq[50];
	char content[51];
	printf("Insira o nome do arquivo: ");
	scanf("%s", &nomearq);
	printf("Insira o conteúdo do arquivo:\n");
	scanf("%s", &content);
	something=fopen(nomearq, "w");
	if(something==NULL){
		printf("Erro aqri");
		exit(1);
	}
	fputs(content, something);
//	fprintf(something, "algo: %s\n", apenas);
	fclose(something);	
	return 0;
}