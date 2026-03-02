#include<stdio.h>
int main() {
    float n1, n2, n3, media;
    char resp;

    printf("Digite as notas para calcular a média\n");
    printf("Digite a primeira nota\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota\n");
    scanf("%f", &n3);

    printf("Que tipo de média gostaria de calcular?\nDigite P para ponderada e A para aritmética.\n");
    scanf(" %c", &resp);
    switch (resp)
    {
    case 'P':
        media=((n1*3) + (n2*3) + (n3*4))/10;
        printf("Média ponderada: %f", media);
        break;
        case 'A':
        media=(n1 + n2 + n3);
        printf("Média aritmética: %f", media);
        break;
    default:
        printf("Digite P(maiusculo) para ponderada e A(maiusculo) para aritmética.");
        break;
    }
    return 0;
}