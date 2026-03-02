#include<stdio.h>
int main(){
    int n, i, j;
    printf("Quant de vezes para calcular ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        scanf("%d", &j);
        printf("Dobro: %d\n", j*2);
    }
    return 0;
}