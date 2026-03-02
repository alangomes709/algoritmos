#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    //sem <time.h> não tava tendo aleatoriedade, 
    //junto com a função time ela "reseta" o rand
    srand(time(NULL));
    int escolha;
    int comput;
    printf("PEDRA PAPEL TESOURA\n");
    printf("Digite os valores correspondentes às opções abaixo:\n");
    printf("0......Pedra\n1......Papel\n2......Tesoura\n");
    scanf("%d", &escolha);

    comput=rand() % 3;

    if (escolha==comput)
    {
        printf("Empate");
    } else if ((escolha==0 && comput==2) || (escolha==1&&comput==0) || (escolha==2&&comput==1))
    {
        printf("Você venceu! :D");
    }
    else if ((escolha==0 && comput==1) || (escolha==1&&comput==2) || (escolha==2&&comput==0))
    {
        printf("Você perdeu! :<");
    }
    return 0;
}
 