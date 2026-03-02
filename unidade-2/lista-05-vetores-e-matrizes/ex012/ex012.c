#include<stdio.h>
int main(){
    int mat[4][4], i, j, soma=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            soma+=mat[i][j];
        }
    }
    printf("soma total: %d\n", soma);
    return 0;
}