#include<stdio.h>

//faltou estruturas aninhadas

struct compras
{
    float bolacha;
    float carne;
    float queijo;
    float presunto;
    float total;
};

float total(struct compras valores){
    valores.total=valores.bolacha+valores.carne+valores.queijo+valores.presunto;
    return valores.total;


}

int main(){
    struct compras precos;

    printf("precifique os itens a seguir:\n");
    printf("bolacha  ");
    scanf("%f", &precos.bolacha);
    printf("carne  ");
    scanf("%f", &precos.carne);
    printf("queijo  ");
    scanf("%f", &precos.queijo);
    printf("presunto  ");
    scanf("%f", &precos.presunto);

    printf("bolacha  %f\n", precos.bolacha);
    printf("carne  %f\n", precos.carne);
    printf("queijo  %f\n", precos.queijo);
    printf("presunto  %f\n", precos.presunto);
    //em uma função
    printf("soma total dos itens: %f\n", total(precos));


    return 0;
}