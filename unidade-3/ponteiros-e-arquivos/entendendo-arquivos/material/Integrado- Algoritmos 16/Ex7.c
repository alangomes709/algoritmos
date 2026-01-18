/************************************************************************
 * Escreve texto digitado em stdin em um arquivo
 ***********************************************************************/
#include <stdio.h> /* funções padrão de E/S */

main(){
	FILE *fp;                      
    char fnome[13];
    char linha[81];
    printf("Entre um nome de arquivo: ");
    scanf("%s", fnome);

    fp = fopen( fnome, "w+"); /* abre arquivo. Conteúdo anterior é perdido.*/
	if (fp == NULL){
      printf("Erro ao abrir %s\n", fnome);
      return 0;
    }else{
    printf("Arquivo aberto com sucesso\n");

    /* lê linha do teclado, armazena em uma string,
    * salva string em arquivo */

    while( fgets(linha, 80, stdin ) != NULL)  
    	fputs(linha, fp);              
    fclose(fp); /* fecha arquivo */
	}
}

