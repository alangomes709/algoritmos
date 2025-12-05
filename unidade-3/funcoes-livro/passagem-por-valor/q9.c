#include<stdio.h>

float media(float n1, float n2, float n3, char op){
    float m;
    if (op=='a')
    {
        m = (n1+n2+n3)/3;
        return m;
    } else if (op=='p')
    {
        m=((n1*5)+(n2*3)+(n3*2))/(3+2+5);
        return m;
    } else {
        printf("Opção inv");
        return 0;
    }
}

int main(){
    float n1, n2, n3;
    char op;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf(" %c", &op);
    printf("%f", media(n1, n2, n3,  op));
}