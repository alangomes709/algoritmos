#include<stdio.h>
int main(){
    int vet[10], codigo, i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Escolha:\n0....finalizar\n1....mostrar na sequencia de leitura\n2....mostrar na sequencia de leitura contraria\n");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 0:
        return 0;
        break;
    
    case 1:
        for ( i = 0; i < 10; i++)
        {
            printf("valor %d = %d\n", i, vet[i]);
        }
        break;
    case 2:
        for ( i = 9; i >= 0; i--)
        {
            printf("valor %d = %d\n", i, vet[i]);
        }
        break;
    default:
        printf("Código inserido inválido!");
        break;
    }
    
}