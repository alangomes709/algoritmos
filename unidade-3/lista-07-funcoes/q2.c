#include<stdio.h>

int potencia(int a, int b);

int main(){
    int x, y;
    printf("Digite valor x: ");
    scanf("%d", &x);
    printf("Digite valor y: ");
    scanf("%d", &y);
    printf("Resultado: %d\n", potencia(x,y));
}

int potencia(int a, int b){
    int i, resul=a;
    for (i = 1; i < b; i++)
    {
        resul=resul*a;
    }
    return resul;
}