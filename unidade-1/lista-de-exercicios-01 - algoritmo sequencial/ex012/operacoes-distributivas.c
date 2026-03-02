#include<stdio.h>

int main() {
    float a, b, c, d;

    printf("Digite quatro valores com espaço entre eles:");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("\nResultados das Somas:\n");
    printf("A + B = %f\n", a + b);
    printf("A + C = %f\n", a + c);
    printf("A + D = %f\n", a + d);
    printf("B + C = %f\n", b + c);
    printf("B + D = %f\n", b + d);
    printf("C + D = %f\n", c + d);

    printf("\nResultados das multiplicações:\n");
    printf("A * B = %f\n", a * b);
    printf("A * C = %f\n", a * c);
    printf("A * D = %f\n", a * d);
    printf("B * C = %f\n", b * c);
    printf("B * D = %f\n", b * d);
    printf("C * D = %f\n", c * d);

    return 0;
}