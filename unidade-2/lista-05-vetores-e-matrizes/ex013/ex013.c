#include<stdio.h>
int main(){
    int mat[4][4], i , j, soma=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        soma+=mat[i][i];
    }
    printf("a soma da diagonal principal é: %d\n", soma);
    
}