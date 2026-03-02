#include<stdio.h>
int main(){
    int mat[5][5], i, j, soma=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Digite valor linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 4; i++)
    {
        soma=0;
        for ( j = 0; j < 4; j++)
        {
            soma+=mat[i][j];
        }
        printf("soma linha %d: %d\n", i, soma);
    }
    return 0;
    
}

