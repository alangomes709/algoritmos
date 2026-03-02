#include<stdio.h>

int main() {
    int num;
    printf("Insira um número:");
    scanf("%d", num);

    if(num % 2==0){
        printf("seu numero é impar");
    }else{
        printf("seu numero é par");
    }

    return 0;
}