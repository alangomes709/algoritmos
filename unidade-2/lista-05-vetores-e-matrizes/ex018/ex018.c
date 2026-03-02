#include<stdio.h>
int main(){
    int mat[4][4], i, j, multi;
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
            printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    }
    printf("Digite um valor inteiro para multiplicar: ");
    scanf("%d", &multi);
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mat[i][j]=mat[i][j]*multi;
        }
        
    }
        for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}