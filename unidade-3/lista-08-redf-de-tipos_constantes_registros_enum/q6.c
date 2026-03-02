#include<stdio.h>

#define MAX_JOGADORES 5

struct Jogadores
{
    char nome[30];
    int pontuacao;
};


int main(){
    int aux=0, fo, fi;
    struct Jogadores j[MAX_JOGADORES];
    for (int i = 0; i < MAX_JOGADORES; i++)
    {
        printf("JOGADOR %d\n", i);
        printf("Digite nome do Jogador %d:  ", i);
        fgets(j[i].nome, 30, stdin);
        printf("Digite a pontuação do Jogador %d:  ", i);
        scanf("%d", &j[i].pontuacao);
        printf("\n");
    }
    for (int i = 0; i < MAX_JOGADORES; i++)
    {
        for (int o = i; o < MAX_JOGADORES; o++)
        {
            if (j[o].pontuacao<j[i].pontuacao)
            {
                aux=fo;
                fi=fo;
                fi=aux;
                printf("%d", fi);
            }
            
        }
        
    }
    
}