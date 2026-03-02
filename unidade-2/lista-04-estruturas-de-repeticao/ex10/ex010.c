#include<stdio.h>
int main(){
    int n, i, j, soma, menor, maior;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("Digite num int ");
        scanf("%d", &j);
        soma+=j;

        if (i==0)
        {
            maior=menor=j;
        }else{
            if (j>maior)
            {
                maior=j;
            }
            if (j<menor)
            {
                menor=j;
            }
            
        }
        
    }
    printf("maior: %d\nmenor: %d\nsoma: %d", maior, menor, soma);
    return 0;
}