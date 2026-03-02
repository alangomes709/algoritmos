#include<stdio.h>
int main() {
    int i, x, y, j=1;
    printf("Digite X: ");
    scanf("%d", &x);
    printf("Digite Y: ");
    scanf("%d", &y);
    for (i = 0; i < y; i++)
    {
        j=j*x;
    }
    printf("X^Y = %d \n", j);
    return 0;
}