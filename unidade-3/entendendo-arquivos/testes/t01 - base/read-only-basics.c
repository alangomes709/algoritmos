#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NOMEARQ "bigode.txt"
int main(){
	FILE *contorno;
	char c;
	contorno=fopen(NOMEARQ, "r");
	if(contorno==NULL){
		printf("Erro");
		exit(1);
	}
	int i;
	for(i=0; i<3; i++){
		c=fgetc(contorno);
		printf("%c", c);
	}
	fclose(contorno);
	return 0;
}