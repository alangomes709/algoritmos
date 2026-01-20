#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dimensoes{
	float altura;
	float largura;
	float peso;
};

struct Produtos {
	int id;
	char nome[50];
	float preco;
	struct Dimensoes dimen;
}
//taxa de entrega, com base nas dimensoes do produto, frete
//pode ser interessante criar um histórico para os clientes
struct Pedido {
	int codigo;
	struct Produto prod;
	char cliente[50];
	char data[10];
}

void novo_registro(char nomearq[]);

int main(){
	
}