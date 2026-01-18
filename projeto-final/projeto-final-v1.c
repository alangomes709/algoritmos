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

struct Pedido {
	int codigo;
	struct Produto prod;
	//pode ser interessante criar um histórico para os clientes
	char cliente[50];
	char data[10];
}