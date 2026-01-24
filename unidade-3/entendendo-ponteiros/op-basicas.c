#include<stdio.h>
#include<stdlib.h>
int main(){
    //um ponteiro null
    int hamburguer=34;
    int itAguaGeladaa=89;
    int coisa;
    int *ha=NULL;
    int *agua;
    //apontamento, pasa o endereço e "mostra" o conteúdo
    agua=&itAguaGeladaa;
    printf("it sabor: %d\n", itAguaGeladaa);    
    printf("posição da variável: %d\n ponteiro com posição da variável: %d\n", &hamburguer, ha);
    printf("posição da variável: %d\n ponteiro com posição da variável: %d\n", &itAguaGeladaa, *agua);
    //alteração de valor atraves do ponteiro
    *agua=45;
    printf("posição da variável: %d\n ponteiro com posição da variável: %d\n", &itAguaGeladaa, *agua);
    printf("it sabor: %d\n", itAguaGeladaa);
    //outros apontamentos
    coisa=*agua;
    printf("coisa: %d\n", coisa);
	return 0;
}