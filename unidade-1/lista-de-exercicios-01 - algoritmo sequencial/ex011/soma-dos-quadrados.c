#include<stdio.h>

int main () {
    int x, y;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    y = x;
    printf("%d", (x * y) * 2);
}