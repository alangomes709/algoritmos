#include<stdio.h>
typedef float compras;


int main(){
    compras bolacha, sal, carne;
    printf("Digite o preço da bolacha");
    scanf("%f", &bolacha);
    printf("Digite o preço do sal");
    scanf("%f", &sal);
    printf("Digite o preço da carne");
    scanf("%f", &carne);
    printf("Respectivamente %f | %f | %f\n", bolacha, sal, carne);
    return 0;
}