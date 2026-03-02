#include<stdio.h>
int main() {
    int i, num, maior, menor;
    float media, valorsom=0, a=0;
    for ( i = 0; i < 10000; i++)
    {
        printf("Digite num");
        scanf("%d", &num);
        if (num==0)
        {
            break;
        }
        valorsom+=num;
        a++;
        if (i==0)
    {
        maior=menor=num;
    }else {
        if (num>maior)
        {
            maior=num;
        }
        if (num<menor)
        {
            menor=num;
        }
    }
    }
    
    if (a>0)
    {
        media=valorsom/a;
        printf("media Num: %f\n", media);
    }
    printf("maior: %d\nmenor: %d\n", maior, menor);
    return 0;

}