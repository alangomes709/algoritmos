#include<stdio.h>

int opera(int a, int b, char op){
    if (op=='+'){
        return a+b;
    } else if (op=='-'){
        return a-b;
    } else if (op=='*'){
        return a*b;
    } else if (op=='/'){
        return a/b;
    } else{
        printf("operador não encontrado");
        return 0;
    }
    
    
}

int main(){
    int a, b;
    char op;
    scanf("%d", &a);
    scanf(" %c", &op);
    scanf("%d", &b);
    printf("%d", opera(a, b, op));
    return 0;
}