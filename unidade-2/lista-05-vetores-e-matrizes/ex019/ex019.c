#include<stdio.h>
//#include<windows.h>
int main(){
    int mat[5][5], n, i, j, g;
    printf("Digite o numero para contar ");
    scanf("%d", &n);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j]==n)
            {
                g++;
            }
            
        }
        printf("\n");
    }

    printf("Numero de vezes que %d ocorreu e: %d", n, g);
}