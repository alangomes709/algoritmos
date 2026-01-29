/****************************************************************
 * programa com menu para operar uma base de dados de no máximo 50
 * agentes secretos; a base de dados é guardada permanentemente em
 * um arquivo em disco.
 ****************************************************************/

#include <stdio.h>                    /* funções padrão de E/S */
#define FNOME "agentes.txt"             /* nome do arquivo de dados */
#define NUM 50                        /* numero de registros na base de dados */
#define NOMELEN 30                    /* tamanho de um nome */

/*** declara estrutura de dados ***/
struct pessoal{
	char nome [NOMELEN];         /* nome codigo(sem espaços em branco) */
    int agnum ;                  /* numero codigo */
};

/*** prototipos ***/
int  cargadb(struct pessoal []);
int  novonome(struct pessoal [], int);
void listatudo(struct pessoal [], int);
void salvadb(struct pessoal [], int);
/****** MAIN *********/
int main(){
   struct pessoal agentes[NUM];     /* array de 50 estruturas      */
   int n;                          /* indice para o ultimo registro ativo */
   char ch;
   
   /*** carrega a base de dados em agentes[], n é o tamanho da base de dados     */
   n = cargadb(agentes);
   printf("%d", n);

   /* seleciona uma opção do menu e processa os dados em memória  */
	do{
    	printf("\nDigite 'e' para entrar novo agente,"); 
    	printf("\n     'l' para listar todos os agentes,");    
    	printf("\n     'q' para terminar: ");
    	ch = getchar();                            
    	switch (ch){
        	case 'e':
        		n = novonome(agentes, n);   /* adiciona um novo agente no indice n  */
        		break;
        	case 'l':                      /* lista todos os registros */
        		listatudo(agentes, n);
            	break;
        	case 'q':                      /* salva todos os registros */
            	salvadb(agentes, n); 
            	break;
         	default:                       /* Engano do usuario  */
            	printf("\nEntre somente as opções listadas.\n");
        }while (fgetc(stdin) != '\n') ;
    }while (ch != 'q');
}

/***********************************************************************
 * lê a base de dados do arquivo (até EOF) no array em memória
 * ENTRADA: um array de do tipo struct pessoal
 * RETORNO: número de elementos lidos
 * SUPOSIÇÕES: o tamanho da base de dados deve ter no máximo 50 registros
 ***********************************************************************/
int cargadb(struct pessoal pessoa[]){
	int i = 0;
    FILE *fp;                     /* define ptr to FILE          */

    fp = fopen(FNOME, "r");    

    while ( fscanf(fp, "%s %d", pessoa[i].nome, &pessoa[i].agnum) != EOF )
      i++;
    fclose(fp);
    return i;
}

/*************************************************************************
 * adiciona novo elemento ao indice n no array pessoa[],
 * o valo da estrutura é obtido da entrada padrão
 * ENTRADA: array pessoa[] -- to store the structure value
 *                       n -- indice do elemento, incrementado a 
 *                            cada novo elemento
 *************************************************************************/
int novonome(struct pessoal pessoa[], int n){
	if (n < NUM){
        printf("Digite nome e código: ");
        scanf("%s %d", pessoa[n].nome, &pessoa[n].agnum);
        n++;
    }else
        printf("Não há mais espaço\n");
      	return n;
}

/*************************************************************************
 * imprime a base de dados na tela
 * ENTRADA: array pessoa[] a imprimir
 *                       n número de registros para imprimir
 *************************************************************************/
void listatudo(struct pessoal pessoa[], int n){
	int j;

    for (j = 0; j < n; j++){
    	printf("%s %d\n", pessoa[j].nome, pessoa[j].agnum);
    }
}

/**************************************************************************
 * Pergunta ao usuário se quer salvar a base de dados. Se a resposta é SIM (s)
 * abre o arquivo para escrita e grava o array no arquivo
 * ENTRADA: array pessoa[] a ser salvo
 *                       n número de registros a ser salvo
 **************************************************************************/
void salvadb(struct pessoal pessoa[], int n){
	int i;
	FILE *fp;

  	while (fgetc(stdin) != '\n');
  	printf("Salvar? ('s' para salvar)\n");
  	
	if (getchar() == 's'){
    	fp = fopen(FNOME, "w");    
     	printf("Salvando...");
     	for (i = 0; i < n; i++){
       		fprintf(fp, "%s %d\n", pessoa[i].nome, pessoa[i].agnum);
       	}
     	fclose(fp);
     	printf("Feito.\n");
    }else
    	printf("Alterações não foram salvas.\n");
}
