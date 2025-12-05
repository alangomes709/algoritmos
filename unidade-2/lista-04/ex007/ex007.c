#include<stdio.h>
int main() {
    int num, i;
    printf("Digite num ");
    scanf("%d", &num);
    if (num<=1)
    {
        printf("Não primo");
        return 0;
    } 
    for (i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("%d \n", i);
            printf("Não e primo");
        }
    }

    printf("e primo");
    return 0;
}