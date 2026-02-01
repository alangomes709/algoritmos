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

struct Pedido {
    int codigo;
    struct Produtos prod;
    char cliente[50];
    char data[10];
    char tipo_envio[20];
    char abrangencia[20];
    float valor_frete;
    char status[30];
    char previsao[20];
    int pagamento_confirmado;
};

int num_pedidos(struct Pedido j[]);
int criar_pedido(struct Pedido j[], int n);
void salvar(struct Pedido j[], int n);
void menu();
void update(struct Pedido j[], int pos);

void limpar_nl(char *s);
void listar_pedidos();

int main(){
	struct Pedido p[NUM];
	int a;
	int op;
	a=num_pedidos(p);
	printf("%d\n", a);
	printf("%f", p[a].prod.preco);
	do {
        menu();
        scanf("%d", &op);
        getchar();

        switch (op) {
            case 1:
                a=criar_pedido(p, a);
                break;
            case 2:
                listar_pedidos();
                break;
            case 3:
//                printf("cod do pedido: ");
//                int posicao;
//                scanf("%d", &posicao);
//                update(p, posicao);
//                attpedido(cod);
                break;
            case 4:
//                excpedido();
                break;
            case 0:
                printf("encerrando\n");
                break;
            default:
                printf("Opc inva.\n");
                system("pause");
                break;
        }
    } while (op != 0);
	return 0;
}

void limpar_nl(char *s){
	int pos=strcspn(s, "\n");
	s[pos]='\0';
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
	if(n>=NUM){
		printf("Não há espaço");
		return n;
	}
	char temp[100];
	//informacoes do j[n]/cliente
	printf("Nome do cliente: ");
	fgets(j[n].cliente, 50, stdin);
	limpar_nl(j[n].cliente);
	printf("Data dd/mm/aaaa: ");
	fgets(j[n].data, 10, stdin);
	limpar_nl(j[n].data);
	printf("Codigo do pedido: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%d", &j[n].codigo);
	getchar();
	//produtos
	printf("Nome do produto: ");
	fgets(j[n].prod.nome,  50, stdin);
	limpar_nl(j[n].prod.nome);
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
	//frete
	printf("\nTipo de envio (E	conomico / Padrao / Expresso): ");
    scanf("%s", pedido.tipo_envio);
    printf("Abrangencia do pedido (Regional / Estadual / Nacional / Internacional): ");
    scanf("%s", pedido.abrangencia);
    pedido.valor_frete = calcular_frete(pedido.tipo_envio, pedido.previsao);
    
    if (strcmp(pedido.abrangencia, "Regional") == 0) {
	    pedido.valor_frete *= 0.8;
	}
	else if (strcmp(pedido.abrangencia, "Estadual") == 0) {
	    pedido.valor_frete *= 1.0;
	}
	else if (strcmp(pedido.abrangencia, "Nacional") == 0) {
	    pedido.valor_frete *= 1.3;
	}
	else if (strcmp(pedido.abrangencia, "Internacional") == 0) {
	    pedido.valor_frete *= 1.7;
	}
	
	
	n++;
	salvar(j, n);
	return n;
}

void pagamento(){
	printf("Pagamento confirmado? (1 - sim / 0 - nao): ");
	scanf("%d", &pedido.pagamento_confirmado);
	
	if(pedido.pagamento_confirmado == 1)
	    strcpy(pedido.status, "Pedido confirmado");
	else
	    strcpy(pedido.status, "Aguardando pagamento");
	
	float total = pedido.prod.preco + pedido.valor_frete;
	
	
	printf("\nResumo do Pedido");
	printf("\nPreco do produto: %.2f", pedido.prod.preco);
	printf("\nFrete: %.2f", pedido.valor_frete);
	printf("\nPrevisao de entrega: %s\n", pedido.previsao);
	printf("\nTOTAL A PAGAR: %.2f\n", total);
}

void listar_pedidos() {
    FILE *arquivo;
    char linha[200];

    arquivo = fopen(NOMEARQ, "r");

    if (arquivo == NULL) {
        printf("Nenhum pedido cadastrado.\n");
        return;
    }

    printf("\n=== LISTA DE PEDIDOS ===\n\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
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
		j[i].cliente,
		j[i].data,
		j[i].codigo,
		j[i].prod.nome,
		j[i].prod.id,
		j[i].prod.preco,
		j[i].prod.dimen.altura,
		j[i].prod.dimen.largura,
	 	j[i].prod.dimen.peso
	 	);
	}
 	fclose(arq);
 }