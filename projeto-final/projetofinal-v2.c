#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NOMEARQ "sonho.txt"
#define NUM 50

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
};
//taxa de entrega, com base nas dimensoes do produto, frete
struct Pedido {
	int codigo;
	struct Produtos prod;
	char cliente[50];
	char data[10];
};

int num_pedidos(struct Pedido j[]);

int main(){
	struct Pedido p[NUM];
	int a;
	char escolha;
	
	a=num_pedidos(p);
	printf("%s %s %d", p[a].cliente, p[a].data, p[a].codigo);
	
	
}

int num_pedidos(struct Pedido j[]){
	int c=0;
	FILE *f;
	f=fopen(NOMEARQ, "r");
	while(fscanf(f, "%s %s %d", &j[c].cliente, &j[c].data, &j[c].codigo)!=EOF){
		c++;
		printf("%s %s %d", j[c].cliente, j[c].data, j[c].codigo);
	}
	fclose(f);
	return c;
}