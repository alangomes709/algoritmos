#include<stdio.h>
int main(){
    int mat[4][3], i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Digite valor linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }

    printf("Canto superior esquerdo: %d\n", mat[0][0]);
    printf("Canto indferior direito: %d\n", mat[4][3]);
    return 0;
    
}