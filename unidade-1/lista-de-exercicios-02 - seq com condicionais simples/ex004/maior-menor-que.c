#include<stdio.h>

int main() {
    int x, y;

    printf("Digite um número X: \n");
    scanf("%d", &x);
    printf("Digite um número Y: \n");
    scanf("%d", &y);

    if (x>y)
    {
        printf("%d", x);
    }else{
        printf("%d", y);
    }
    return 0;
}