// struct pedido com produto
// produto precisa struct dimensão
// produto ter variavel frete

// struct dimensoes
//struct produto
// struct pedidp
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
};
//taxa de entrega, com base nas dimensoes do produto, frete
//pode ser interessante criar um histórico para os clientes
struct Pedido {
	int codigo;
	struct Produtos prod;
	char cliente[50];
	char data[10];
};

void novo_registro(char nomearq[]);



void calcfrete(struct Pedido *p) {
	
float volume;

volume = prod.alt * prod.larg * prod.peso;

if (volume <= 50) {
	frete = RS xx;;
	}
	else if (volume <= 100) {
		frete = RS xx;
	}
	else {
		frete = RS xx
	}
}


void menu() {
    printf("MENU");
    printf("1 - criar pedido\n");
    printf("2 - Listar pedidos\n");
    printf("3 - atualizar pedido\n");
    printf("4 - excluir pedido\n");
    printf("0 - sair\n");
    printf("Opc: ");
}

void execSist() {
    int variavel, var2;

    do {
        menu();
        scanf("%d", &op);

        switch (op) {
            case 1:
                criarpedido();
                break;
            case 2:
                listarpedidos();
                break;
            case 3:
                printf("cod do pedido: ");
                scanf("%d", &codigo);
                attpedido(cod);
                break;
            case 4:
                excpedido();
                break;
            case 0:
                printf("encerrando/n");
                break;
            default:
                printf("Opc inva.\n");
                pausar();
        }
    } while (op != 0);
}