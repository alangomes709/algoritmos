#include<stdio.h>
int main(){
    int a, i;
    printf("Digite ");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {
        printf("%d ", i);
    }
    return 0;
}