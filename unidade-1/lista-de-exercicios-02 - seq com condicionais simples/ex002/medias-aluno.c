#include<stdio.h>

int main () {
    int n1, n2, n3;
    printf("Calcule sua média:");
    printf("Nota1:\n");
    scanf("%d", &n1);
    printf("Nota2:\n");
    scanf("%d", &n2);
    printf("Nota3:\n");
    scanf("%d", &n3);

    printf("Sua media é %d", (n1+n2+n3)/3);
}