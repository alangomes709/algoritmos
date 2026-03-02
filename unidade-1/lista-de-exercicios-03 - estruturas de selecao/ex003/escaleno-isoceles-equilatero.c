#include<stdio.h>
int main() {
    int l1, l2, l3;
    printf("Digite valores correspondentes aos lados do triângulo\n");
    printf("Lado:\n");
    scanf("%d", &l1);
    printf("Lado:\n");
    scanf("%d", &l2);
    printf("Lado:\n");
    scanf("%d", &l3);
    if (l1==l2 && l1==l3)
    {
        printf("Triângulo equilátero");
    } else if (l1==l2 || l1==l3)
    {
        printf("Triângulo isóceles");
    } else if (l1!=l2 && l1!=l3)
    {
        printf("Triângulo escaleno");
    }
    return 0;
}