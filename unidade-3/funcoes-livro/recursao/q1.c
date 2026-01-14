#include<stdio.h>
int soma=1;
int somaCubos(int n, int g, int h){
    if (n<=h)
    {
        return 0;
    }else {
        return soma+=somaCubos()
    }
    

    
}

int main(){
    int x;
    int g, h;
    scanf("%d", &x);
    g=1;
    h=1;
    printf("soma dos numeros: %d\n", somaCubos(x,g, h));

    return 0;
}