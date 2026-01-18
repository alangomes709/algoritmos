#include<stdio.h>
#include<stdlib.h>
int main (){
	int *agua, *hamburguer, *unidade, fill=43;
	float topeiraGamer=89;
	agua=&fill;
	printf("Agua: %d\n", *agua);
	hamburguer=agua;
	//Um ponteiro pode receber o endereço apontado por outro ponteiro se ambos forem do mesmo tipo.
	printf("hamburguer %d\n", *hamburguer);
	//errado isso aqui, ponteiro interiro apontando para float não pode, se acontecer precisa de conversão específica.
	//compilador não vai mostrar erro, mas mesmo sendo ponteiro do tipo int vai apontar para int, e não vai encontrar pq a variável é float
	//portanto comportamento indefinido
	unidade=&topeiraGamer;
	printf("topeira gamer: %d\n", *unidade);
	return 0;
	
}