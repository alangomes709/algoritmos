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
	char data[15];
	//frete
	char previsao[20];
	char abrangencia[20];
	char tipo_envio[20];
    float valor_frete;
    float total;
};

//funcoes :)
int num_pedidos(struct Pedido j[]);
int criar_pedido(struct Pedido j[], int n);
void salvar(struct Pedido j[], int n);
void menu();
void update_quest(struct Pedido j[], int n);
void update(struct Pedido j[], int qnt);
void excluir_pedido(struct Pedido j[], int *n);
void limpar_nl(char *s);
void listar_pedidos();
float calcular_frete(char tenvio[], char tabran[], struct Pedido j[], int n);

int main(){
	struct Pedido p[NUM];
	int a;
	int op;
	a=num_pedidos(p);
	printf("Quantidade de pedidos: %d\n", a);
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
                update_quest(p, a);
                break;
            case 4:
            	excluir_pedido(p, &a);
                break;
            case 0:
                printf("Encerrando\n");
                break;
            default:
                printf("Opc invalida.\n");
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
    printf("1 - Criar pedido\n");
    printf("2 - Listar pedidos\n");
    printf("3 - Atualizar pedido\n");
    printf("4 - Excluir pedido\n");
    printf("0 - Sair\n");
    printf("Opc: ");
}

int num_pedidos(struct Pedido j[]){
	int c = 0;
	FILE *f=fopen(NOMEARQ, "r");
	
	if(f==NULL){
		printf("Comece a pedir\n");
		return 0;
	}
	
	while(fscanf(f, "%49[^;];%14[^;];%d;%49[^;];%d;%f;%f;%f;%f;%f;%19[^;];%f",
		j[c].cliente, 
		j[c].data, 
		&j[c].codigo,
		j[c].prod.nome,
		&j[c].prod.id,
		&j[c].prod.preco,
		&j[c].prod.dimen.altura,
		&j[c].prod.dimen.largura,
		&j[c].prod.dimen.peso,
		&j[c].valor_frete,
		j[c].previsao,
		&j[c].total
		) == 12) {
		c++;
	}
	fclose(f);
	return c;
}

int criar_pedido(struct Pedido j[], int n){
	char tenvio[20], tabran[20];
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
	fgets(j[n].data, 15, stdin);
	limpar_nl(j[n].data);
	printf("Codigo do pedido: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%d", &j[n].codigo);
	
	//produtos
	printf("Nome do produto: ");
	fgets(j[n].prod.nome, 50, stdin);
	limpar_nl(j[n].prod.nome);
	printf("ID do produto: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%d", &j[n].prod.id);
	printf("Preco do produto: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%f", &j[n].prod.preco);
	//dimensoes
	printf("Para motivos logisticos informe as dimensoes do pacote(Em Centimetros/Quilogramas)\n");
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
	printf("\nTipo de envio (Economico / Padrao / Expresso): ");
	fgets(tenvio, 50, stdin);
	limpar_nl(tenvio);
	printf("Abrangencia do pedido (Regional / Estadual / Nacional / Internacional): ");
	fgets(tabran, 50, stdin);
	limpar_nl(tabran);
	j[n].valor_frete=calcular_frete(tenvio, tabran, j, n);
	j[n].total=j[n].valor_frete+j[n].prod.preco;
	n++;
	salvar(j, n);
	return n;
}

void listar_pedidos(){
    struct Pedido p;
    FILE *arquivo = fopen(NOMEARQ, "r");

    if(arquivo == NULL){
        printf("Nenhum pedido cadastrado.\n");
        return;
    }

    printf("\n===== LISTA DE PEDIDOS =====\n\n");

    while(fscanf(arquivo,
        "%49[^;];%14[^;];%d;%49[^;];%d;%f;%f;%f;%f;%f;%19[^;];%f\n",
        p.cliente,
        p.data,
        &p.codigo,
        p.prod.nome,
        &p.prod.id,
        &p.prod.preco,
        &p.prod.dimen.altura,
        &p.prod.dimen.largura,
        &p.prod.dimen.peso,
        &p.valor_frete,
        &p.previsao,
        &p.total
		) == 12){	

        printf("Cliente: %s\n", p.cliente);
        printf("Data: %s\n", p.data);
        printf("Codigo: %d\n", p.codigo);
        printf("Produto: %s (ID %d)\n", p.prod.nome, p.prod.id);
        printf("Preco: R$ %.2f\n", p.prod.preco);
        printf("Dimensoes: %.2f x %.2f | Peso: %.2f kg\n",
               p.prod.dimen.altura,
               p.prod.dimen.largura,
               p.prod.dimen.peso);
		printf("Frete: R$ %.2f\n", p.valor_frete);
		printf("Previsao: %s\n", p.previsao);
        printf("TOTAL: R$ %.2f\n", p.total);
        printf("----------------------------\n");
    }
    fclose(arquivo);
}

void update_quest(struct Pedido j[], int n){
	char temp[100];
	char tenvio[20], tabran[20];
	int codigo;
	int pos =-1;
	
	//pede o cod da compra...
	   printf("Codigo do pedido a atualizar: ");
	   scanf("%d", &codigo);
	   getchar();
	   
	//localiza a posiçao do vet por meio do cod

    for(int i = 0; i < n; i++){
        if(j[i].codigo == codigo){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        printf("Pedido nao encontrado!\n");
        return;
    }
	
	//Informando cliente na pos do vet certinha agr
	printf("Nome do cliente: ");
	fgets(j[pos].cliente, 50, stdin);
	limpar_nl(j[pos].cliente);
	printf("Data dd/mm/aaaa: ");
	fgets(j[pos].data, 15, stdin);
	limpar_nl(j[pos].data);
	
	printf("O codigo nao pode ser alterado\n");
	
	//produtos no vet certinha
	printf("Nome do produto: ");
	fgets(j[pos].prod.nome, 50, stdin);
	limpar_nl(j[pos].prod.nome);
	printf("ID do produto: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%d", &j[pos].prod.id);
	printf("Preco do produto: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%f", &j[pos].prod.preco);
	
	//dimensoes no vet cetinha 
	printf("Para motivos logisticos informe as dimensoes do pacote (Em Centimetros/Quilogramas)\n");
	printf("Altura: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%f", &j[pos].prod.dimen.altura);
	printf("Largura: ");
	fgets(temp, 100, stdin);
	sscanf(temp,"%f", &j[pos].prod.dimen.largura);
	printf("Peso: ");
	fgets(temp, 100, stdin);
	sscanf(temp, "%f", &j[pos].prod.dimen.peso);
	//frete
	printf("\nTipo de envio (Economico / Padrao / Expresso): ");
	fgets(tenvio, 50, stdin);
	limpar_nl(tenvio);
	printf("Abrangencia do pedido (Regional / Estadual / Nacional / Internacional): ");
	fgets(tabran, 50, stdin);
	limpar_nl(tabran);
	j[pos].valor_frete=calcular_frete(tenvio, tabran, j, pos);
	j[pos].total=j[pos].valor_frete+j[pos].prod.preco;
	
	// salvando essas alterçoes btw
	salvar(j, n);
	
}

float calcular_frete(char tenvio[], char tabran[], struct Pedido j[], int n){
	float vtipo_frete=0;
	if(strcmp(tenvio, "Economico") == 0){
        strcpy(j[n].previsao, "20 dias");
    	vtipo_frete= 20.0;
	}else if(strcmp(tenvio, "Padrao") == 0){
		strcpy(j[n].previsao, "15 dias");
	    vtipo_frete= 30.0;
	}else{
		strcpy(j[n].previsao, "7 dias");
	    vtipo_frete= 45.0;
	}
	if (strcmp(tabran, "Regional") == 0) {
	    vtipo_frete *= 0.8;
	}
	else if (strcmp(tabran, "Estadual") == 0) {
	    vtipo_frete *= 1.0;
	}
	else if (strcmp(tabran, "Nacional") == 0) {
	    vtipo_frete *= 1.3;
	}
	else if (strcmp(tabran, "Internacional") == 0) {
	    vtipo_frete *= 1.7;
	}
	return vtipo_frete;
}

void excluir_pedido(struct Pedido j[], int *n){
    int codigo;
    
    //pede o cod agr p excluir
    printf("Digite o codigo do pedido para excluir: ");
    scanf("%d", &codigo);
    getchar();
    
    //localiza a vet com o cod... ("pos" começa em -1 pois a posiçao -1 do vetor é invalida, nao correndo risco de alterar/apagar nada...
    int pos = -1;
    for(int i = 0; i < *n; i++){
        if(j[i].codigo == codigo){
            pos = i;
            break;
        }
    }
    
    if(pos == -1){
        printf("Pedido nao encontrado!\n");
        return;
    }
    
    
    for(int i = pos; i < *n - 1; i++){
        j[i] = j[i + 1];
    }
    
    (*n)--;
    salvar(j, *n);
    printf("Pedido excluido com sucesso!\n");
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
		fprintf(arq, "%s;%s;%d;%s;%d;%f;%f;%f;%f;%f;%s;%f\n",
		j[i].cliente,
		j[i].data,
		j[i].codigo,
		j[i].prod.nome,
		j[i].prod.id,
		j[i].prod.preco,
		j[i].prod.dimen.altura,
		j[i].prod.dimen.largura,
	 	j[i].prod.dimen.peso,
		j[i].valor_frete,
		j[i].previsao,
		j[i].total
	 	);
	}
 	fclose(arq);
 	printf("Salvo com sucesso!\n");
 }