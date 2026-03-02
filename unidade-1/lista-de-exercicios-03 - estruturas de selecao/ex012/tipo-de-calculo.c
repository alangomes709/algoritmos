#include<stdio.h>
#include<math.h>
int main () {
    float num;
    int escolha;
    printf("Digite um número par calcular");
    scanf("%f", &num);
    printf("Digite os seguintes números para selecionar o tipo de calculo:\n101-Raiz quadrada\n102-A metade\n 10 per cento\n 104-O dobro\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 101:
        printf("Resultado %f", sqrt(num));
        break;
    case 102:
        printf("Resultado %f", num/2);
        break;
    case 103:
        printf("Resultado %f", num*0.1);
        break;
    case 104:
        printf("Resultado %f", num*2);
        break;
    
    default:
        printf("Insira os números relacionados a cada opção");
        break;
    }
    return 0;
}