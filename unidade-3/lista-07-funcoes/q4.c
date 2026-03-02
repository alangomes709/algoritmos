#include<stdio.h>

int mostra_transposta(int a[5][5]);

int main(){
    int mat[5][5]={{3,6,2,8,3}, {5,9,23,65,7},{45,8,12,5,9},{67,3,7,1,42},{7,4,5,0,2}};
    printf("Matriz transposta: \n");
    mostra_transposta(mat);
}

int mostra_transposta(int a[5][5]){
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
    
}