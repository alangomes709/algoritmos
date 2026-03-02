#include<stdio.h>
int main() {
    int i, num1, num2, j;
    printf("digite num1\n");
    scanf("%d", &num1);
    printf("digite num2\n");
    scanf("%d", &num2);
    for ( i = 0; i < num1; i++)
    {
        j+=num2;
    }
    printf("Num2: %d\n", j);
    return 0;
}