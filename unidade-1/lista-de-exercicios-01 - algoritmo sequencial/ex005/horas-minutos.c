#include<stdio.h>
#include<stdlib.h>

int main() {
    int horas, minutos, totalMin;

    printf("Digite a hora: \n");
    scanf("%d", &horas);
    printf("Digite os minutos: \n");
    scanf("%d", &minutos);

    totalMin = horas * 60 + minutos;

    printf("%d", totalMin);

    return 0;
}