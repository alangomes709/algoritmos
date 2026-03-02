#include<stdio.h>
#include<stdlib.h>

int main() {
    //c=2πr
    float pi = 3.14;
    float raio;
    printf("Insira o valor do raio para calcular o comprimento de uma circunferência: \n");
    scanf("%f", &raio);
    printf("%f", raio * pi * 2);
    
    return 0;
}