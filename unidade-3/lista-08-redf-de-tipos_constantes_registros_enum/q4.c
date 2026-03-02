#include<stdio.h>

struct Livro
{
    char titulo[30];
    int anoPublicacao;
    int paginas;
};

int comparamento(struct Livro l1[]){
    if (l1[0].anoPublicacao<l1[1].anoPublicacao)
    {
        return 0;
    } else
    {
        return 1;
    }
}

int main(){
    struct Livro l1[2];
    int i;
    for ( i = 0; i < 2; i++)
    {
        printf("LIVRO %d: \n\n", i+1);
        printf("Título do livro 1: \n");
        fgets(l1[i].titulo, 30, stdin);
        printf("Ano de Publicação: \n");
        scanf("%d", &l1[i].anoPublicacao);
        printf("Páginas: \n");
        scanf("%d", &l1[i].paginas);
    }
    int idade = comparamento(l1);
    if (idade==1)
    {
        printf("Livro mais velho: %s", l1[0].titulo);
    } else {
        printf("Livro mais novo: %s", l1[1].titulo);
    }
    return 0;
}