#include<stdio.h>
int main() {
    int i1, i2, i3;
    printf("Comparando idades, quam é o mais novo?\n");
    printf("Idade de Huguinho\n");
    scanf("%d", &i1);
    printf("Idade de Zezinho\n");
    scanf("%d", &i2);
    printf("Idade de Luizinho\n");
    scanf("%d", &i3);
    if (i1<i3 && i1<i2)
    {
        printf("Huguinho é o mais novo");
    }else if (i2<i1 && i2<i3)
    {
        printf("Zezinho é mais novo");
    } else{
        printf("Luizinho é mais novo");
    }
    return 0;
    
}