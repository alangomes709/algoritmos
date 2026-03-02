#include<stdio.h>
int main(){
    int mat[4][4], i, j, soma, escolha;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("escolha uma linha para soma e media dos valores\n");
    scanf("%d", &escolha);
    soma=0;
    for (j = 0; j < 4; j++)
    {
        soma+=mat[escolha][j];
    }
    printf("A soma da Linha %d = %d\n", escolha, soma);
    printf("A media da Linha %d = %d\n", escolha, soma/4);
    
    return 0;
}