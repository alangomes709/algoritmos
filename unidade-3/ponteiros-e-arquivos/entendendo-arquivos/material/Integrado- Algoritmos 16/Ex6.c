/************************************************************************
 * L� um caracter por vez de um arquivo e
 * o imprime na sa�da padr�o
 ************************************************************************/
#include <stdio.h> /* para fun��es padr�o de E/S */
#define NOMEDOARQUIVO "teste.txt"
int main(){
	FILE *fp;                      
    // char fnome[13];
    int ch;
    // printf("Entre um nome de arquivo: ");
    // scanf("%s", fnome);

    fp = fopen( NOMEDOARQUIVO, "r" ); /* abre arquivo*/
	if (fp == NULL){
    	printf("Erro ao abrir %s\n", NOMEDOARQUIVO);
    	return 0;
    }else{
    	printf("Arquivo aberto com sucesso.\n");

    	/* L� o arquivo caracter a caracter e imprime em stdout (sa�da padr�o) */
    	while((ch=fgetc(fp)) != EOF){
    		printf("%c", ch);
    	}
		fclose(fp); /* fecha arquivo */
	}
}
