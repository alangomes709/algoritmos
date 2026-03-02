#include<stdio.h>

int main(){
    int i1, i2, i3;
    printf("Comparando idades, quam é o mais novo?\n");
    printf("Idade de Huguinho\n");
    scanf("%d", &i1);
    printf("Idade de Zezinho\n");
    scanf("%d", &i2);
    printf("Idade de Luizinho\n");
    scanf("%d", &i3);

    if (i1<i2)
    {
        if (i1<i3)
        {
            printf("Huguinho é o caçula");
        }        
    } else if (i2<i3)
    {
        if (i2<i1)
        {
            printf("Zezinho é o caçula");
        }
        
    }else{
        printf("Luizinho é o caçula");
    }
    return 0;
}