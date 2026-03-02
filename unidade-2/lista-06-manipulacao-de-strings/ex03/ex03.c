#include<stdio.h>
#include<string.h>
int main(){
    char nome[5][100];
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        fgets(nome[i], 99, stdin);
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("nome %d: %s\n", i+1, nome[i]);
    }
    return 0;
    
}