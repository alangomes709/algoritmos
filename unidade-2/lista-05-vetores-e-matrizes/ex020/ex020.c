#include<stdio.h>
int main(){
    int i, j;
    //int mata[4][4]={{3, 4 , 2, 5}, {5, 2, 8, 6}, {7, 8, 4 , 3}, {7, 6, 4,9}};
    int mata[4][4]={{1, 2 , 3, 4}, {5, 6, 7, 8}, {9, 10, 11 , 12}, {13, 14, 15,16}};
    printf("Matriz normal:\n"); 
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d  ", mata[i][j]);
        }
        printf("\n");
    }
    printf("Matriz transposta:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d  ", mata[j][i]);
        }
        printf("\n");
    }
    
}