#include<stdio.h>
int main() {
    int a, i;
    printf("Digite num ");
    scanf("%d", &a);
    for ( i = 0; i < a; i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}