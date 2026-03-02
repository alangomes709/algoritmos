#include<stdio.h>
int main(){
    int mat[4][3], i, j, linha, coluna;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("escolha uma linha e coluna para exibir: \n");
    printf("Digite linha: ");
    scanf("%d", &linha);
    printf("Digite coluna: ");
    scanf("%d", &coluna);
    printf("elemento da linha e coluna selecionada: %d\n", mat[linha][coluna]);

    return 0;
}