#include<stdio.h>
int main(){
    int mata[4][4],matb[4][4], i, j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mata[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            mata[i][j]=mata[i][j]*2;
        }
        
    }
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", mata[i][j]);
        }
        printf("\n");
        
    }
    
}