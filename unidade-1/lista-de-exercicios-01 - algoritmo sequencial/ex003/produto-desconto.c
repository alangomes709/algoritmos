#include<stdio.h>
#include<stdlib.h>

int main() {
    float valProduto;
    printf("Digite o valor do produto: \n");
    scanf("%f", &valProduto);
    valProduto *= 1 - 0.2; 
    printf("Valor do produto após o desconto: %f\n", valProduto);
    return 0;
}