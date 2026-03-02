#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {
    int escolha;
    int maquina;
        //passo 1: escolha do jogador, o que ele vai usar. Pedra? Papel? Tesoura?
    //manda ele escolher
    printf("PEDRA PAPEL TESOURA\n");
    printf("Digite os valores correspondentes às opções abaixo:\n");
    printf("0......Pedra\n1......Papel\n2......Tesoura\n");
    scanf("%d", &escolha);

//passo 2:hora da batalha
// utilize switch case com a condição da escolha. 
//Se o jogador escolher pedra, defina o que acontece
    switch (escolha)
    {
    case 0:
// se voce escolher pedra e a maquina pedra 0, vai dar empate.
// se você escolher pedra e a máquina tesoura 2, você ganha.
// se você escolher pedra e a máquina papel 1, você perde.
        printf("Máquina esolheu %d\n", maquina = rand()%3);
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
        //creio que há uma foroma mais eficiente de fazer
    case 1:
        printf("Máquina esolheu %d\n", maquina = rand()%3);
        //esse pprintf não é necessário. DA pra por só maquina = rand()%3 q da na mesma
        //esse rand, ele é fácilmente previsível, ele escolhe somente uma vez,
        //independente de quanto voce rode o código vai dar a mesma coisa
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
        printf("Máquina esolheu %d\n", maquina = rand()%3);
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
