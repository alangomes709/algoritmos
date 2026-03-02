#include<stdio.h>

int main() {
    int n1, n2, n3;
    int mediaA, mediaP, resp;

    printf("Digite as notas para caular a média\n");
    printf("Digite a primeira nota\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota\n");
    scanf("%d", &n2);
    printf("Digite a terceira nota\n");
    scanf("%d", &n3);

    mediaA = (n1 + n2 + n3)/3;
    mediaP = ((n1*3) + (n2*3) + (n3*4))/10;
            printf("%d\n", mediaA);
            printf("%d\n", mediaP);

    printf("Qual tipo de média deseja?\nUse '1' para artimética, ou '2' para ponderada(pesos 3, 3 e 4, respectivamente)?");
    scanf("%d", &resp);
    if (resp==1)
    {
        printf("Média aritimética: %d", mediaA);
    }else if (resp==2)  
    {
        printf("Média ponderada: %d", mediaP);
    }else{
        printf("Digite apenas '1' para artimética, ou '2' para ponderada");
    }

    return 0;
}