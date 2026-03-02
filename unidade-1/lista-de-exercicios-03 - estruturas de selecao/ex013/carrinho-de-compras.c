#include<stdio.h>
#include<math.h>
int main() {
    int escolha;
    float quant;
    printf("Bem-vindo a lanchonete. Faça sua escolha:\n");
    printf("\nCÓDIGO......LANCHE................PREÇO UNITÁRIO\n");
    printf("100.........Cachorro quente.............R$: 5,00\n");
    printf("101.........Misto quente................R$: 3,50\n");
    printf("102.........Misto quente com ovo........R$: 4,00\n");
    printf("103.........Hamburguer..................R$: 7,00\n");
    printf("104.........Cheeseburguer...............R$: 8,00\n");
    printf("105.........Refrigerante................R$: 2,00\n");
    printf("\nDigite o código do item escolhido:\n");
    scanf("%d", &escolha);
    printf("Quantos itens você quer?\n");
    scanf("%f", &quant);
    switch (escolha)
    {
    case 100:
        printf("Você escolheu: Cachorro quente\nValor a ser pago.....R$: %.2f", quant*5);
        break;
    case 101:
        printf("Você escolheu: Misto quente\nValor a ser pago.....R$: %.2f", quant*3.5);
        break;
    case 102:
        printf("Você escolheu: Misto quente com ovo\nValor a ser pago.....R$: %.2f", quant*4);
        break;
    case 103:
        printf("Você escolheu: Hamburguer\nValor a ser pago.....R$: %.2f", quant*7);
        break;
    case 104:
        printf("Você escolheu: Cheeseburguer\nValor a ser pago.....R$: %.2f", quant*8);
        break;
    case 105:
        printf("Você escolheu: Refrigerante\nValor a ser pago.....R$: %.2f", quant*2);
        break;
    
    default:
        printf("Certifique-se de que tenha inserido os valores corretos!");
        break;
    }
    return 0;
}