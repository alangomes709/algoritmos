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

void limpar_nl(char *s);

int main(){
	struct Pedido p[NUM];
	int a;
	int op;
	a=num_pedidos(p);
	printf("%d\n", a);
	do {
        menu();
        scanf("%d", &op);
        getchar();

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
	while(fscanf(f, "%49[^;];%9[^;];%d;%49[^;];%d;%f;%f;%f;%f", 
		j[c].cliente, 
		j[c].data, 
		&j[c].codigo,
		j[c].prod.nome,
		&j[c].prod.id,
		&j[c].prod.preco,
		&j[c].prod.dimen.altura,
		&j[c].prod.dimen.largura,
		&j[c].prod.dimen.peso)==9){
		c++;
	}
	fclose(f);
	return c;
}

int criar_pedido(struct Pedido j[], int n){
	if(n<NUM){
		char temp[100];
		//informacoes do j[n]/cliente
		printf("Nome do cliente: ");
		fgets(j[n].cliente, 50, stdin);
		fgets(j[n].data, 10, stdin);
		printf("Codigo do pedido: ");
		fgets(temp, 100, stdin);
		sscanf(temp, "%d", &j[n].codigo);
		//produtos
		printf("Nome do produto: ");
		fgets(j[n].prod.nome,  50, stdin);
		printf("ID do produto: ");
		fgets(temp, 100, stdin);
		sscanf(temp, "%d", &j[n].prod.id);
		printf("Preco do produto: ");
		fgets(temp, 100, stdin);
		sscanf(temp, "%f", &j[n].prod.preco);
		//dimensoes
		printf("Para motivos logisticos informe as dimensoes do pacote\n");
		printf("Altura: ");
		fgets(temp, 100, stdin);
		sscanf(temp, "%f", &j[n].prod.dimen.altura);
		printf("Largura: ");
		fgets(temp, 100, stdin);
		sscanf(temp,"%f", &j[n].prod.dimen.largura);
		printf("Peso: ");
		fgets(temp, 100, stdin);
		sscanf(temp, "%f", &j[n].prod.dimen.peso);
		salvar(j, n);
		n++;
		return n;
		}
}


void salvar(struct Pedido j[], int n){
	int i;
	FILE *arq;
	arq=fopen(NOMEARQ, "w");
	if(arq==NULL){
		printf("Erro ao abrir");
		exit(1);
	}
	for(i=0; i<n; i++){	
		fprintf(arq, "%s;%s;%d;%s;%d;%f;%f;%f;%f\n",
		j[n].cliente,
		j[n].data,           
		j[n].codigo,
		j[n].prod.nome,    	
		j[n].prod.id,         
		j[n].prod.preco,
		j[n].prod.dimen.altura,
		j[n].prod.dimen.largura,
	 	j[n].prod.dimen.peso
	 	);
	}
 	fclose(arq);	
 }