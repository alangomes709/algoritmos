#include <stdio.h>
int Somar(int p)
{
    if (p == 0)
    {
        return 0;
    }

    return p + Somar(p - 1);
}

int main()
{
    int resul = 0;
    int j[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("digite um valor para a posição %d", i);
        scanf("%d", &j[i]);
    }
    for (int i = 9; i >= 9; i--)
    {
        resul += Somar(j[i]);
    }
    printf("%d", resul);
}
