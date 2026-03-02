#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {
    int escolha;
    int maquina;
    printf("PEDRA PAPEL TESOURA\n");
    printf("Digite os valores correspondentes às opções abaixo:\n");
    printf("0......Pedra\n1......Papel\n2......Tesoura\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0:
        // printf("Máquina esolheu %d\n", maquina = rand()%3);
        maquina = rand()%3;
        if (escolha==maquina)
        {
            printf("Empate");
        }else if (maquina==1)
        {
            printf("Você perdeu :<");
        }else if (maquina==2)
        {
            printf("Você venceu! :D");
        }
        break;
    case 1:
        // printf("Máquina esolheu %d\n", maquina = rand()%3);
        maquina = rand()%3;
        if (escolha==maquina)
        {
            printf("Empate");
        }else if (maquina==2)
        {
            printf("Você perdeu :<");
        }else if (maquina==0)
        {
            printf("Você venceu! :D");
        }
        break;
    case 2:
        // printf("Máquina esolheu %d\n", maquina = rand()%3);
        maquina = rand()%3;
        if (escolha==maquina)
        {
            printf("Empate");
        }else if (maquina==0)
        {
            printf("Você perdeu :<");
        }else if (maquina==1)
        {
            printf("Você venceu! :D");
        }
        break;    
    default:
        printf("Esccolha os valores corretos!");
        break;
    }
    return 0;
}
