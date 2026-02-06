#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NOMEARQ "sonho.txt"
#define NUM 100

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
int criar_pedido(struct Pedido j[], int n);
void salvar(struct Pedido j[], int n);
void menu();

int main(){
	struct Pedido p[NUM];
	int a;
	int op;
	a=num_pedidos(p);
	do {
        menu();
        scanf("%d", &op);

        switch (op) {
            case 1:
                criar_pedido(p, a);
                break;
            case 2:
//                listarpedidos();
                break;
            case 3:
                printf("cod do pedido: ");
//                scanf("%d", &codigo);
//                attpedido(cod);
                break;
            case 4:
//                excpedido();
                break;
            case 0:
                printf("encerrando/n");
                break;
            default:
                printf("Opc inva.\n");
                system("pause");
                break;
        }
    } while (op != 0);
	return 0;
}

void menu() {
    printf("MENU\n");
    printf("1 - criar pedido\n");
    printf("2 - Listar pedidos\n");
    printf("3 - atualizar pedido\n");
    printf("4 - excluir pedido\n");
    printf("0 - sair\n");
    printf("Opc: ");
}

int num_pedidos(struct Pedido j[]){
	int c=0;
	FILE *f;
	f=fopen(NOMEARQ, "r");
	if(f==NULL){
		printf("Erro na abertura");
		return 0;
	}
	while(fscanf(f, "%s %s %d", &j[c].cliente, &j[c].data, &j[c].codigo)!=EOF){
		
		c++;
	}
	fclose(f);
	return c;
}

int criar_pedido(struct Pedido j[], int n){
	
	if(n<NUM){
		//informacoes do j[n]/cliente
		printf("Nome do cliente: ");
		scanf("%c");
		fgets(j[n].cliente, 50, stdin);
		printf("Data dd/mm/aaaa: ");
		fgets(j[n].data, 10, stdin);
		scanf("%c");
		printf("Codigo do pedido: ");
		scanf("%d", &j[n].codigo);
		scanf("%c");
		//produtos
		printf("Nome do produto: ");
		scanf("%c");
		fgets(j[n].prod.nome,  50, stdin);
		printf("ID do produto: ");
		scanf("%d", &j[n].prod.id);
		printf("Preco do produto: ");
		scanf("%f", &j[n].prod.preco);
		//dimensoes
		printf("Para motivos logisticos informe as dimensoes do pacote\n");
		printf("Altura: ");
		scanf("%f", &j[n].prod.dimen.altura);
		printf("Largura: ");
		scanf("%f", &j[n].prod.dimen.largura);
		printf("Peso: ");
		scanf("%f", &j[n].prod.dimen.peso);
		salvar(j, n);
		n++;
	} else {
		return n;
	}
}


void salvar(struct Pedido j[], int n){
	FILE *arq;
	arq=fopen(NOMEARQ, "w");
	if(arq==NULL){
		printf("Erro ao abrir");
		exit(1);
	}
	fprintf(arq, "Nome do cliente: %s", j[n].cliente);
	fprintf(arq, "\nData dd/mm/aaaa: %s", j[n].data);
	fprintf(arq, "\nCodigo do pedido: %d", j[n].codigo);
	fprintf(arq, "\nNome do produto: %s", j[n].prod.nome);
	fprintf(arq, "\nID do produto: %d", j[n].prod.id);
	fprintf(arq, "\nPreco do produto: %f", j[n].prod.preco);
	fprintf(arq, "\nPreco do produto: %f", j[n].prod.dimen.altura);
	fprintf(arq, "\nLargura: %f", j[n].prod.dimen.largura);
	fprintf(arq, "\nPeso:%f", j[n].prod.dimen.peso);
	
	fclose(arq);
}