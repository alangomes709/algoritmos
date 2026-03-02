#include<stdio.h>
int main(){
    int mat[2][2]={{1, 2}, {5, 6}};
    int i, multi=1, multia=1;
    for ( i = 0; i < 2; i++)
    {
        multi=multi*mat[i][i];
    }

    for (i = 0; i < 2; i++) {
        multia*=mat[i][1 - i];
    }
    
    printf("Diagonal princ %d\n", multi);
    printf("Diagonal sec %d\n", multia);
    printf("Subtração das duas(determinante): %d", multi-multia);
}