#include<stdio.h>
#include<stdlib.h>
int main(){
    //um ponteiro null
    int hamburguer=34;
    int itAguaGeladaa=89;
    int *ha;
    int *agua;
    ha=&hamburguer;
    agua=&itAguaGeladaa;
    printf("posição da variável: %d\n ponteiro com posição da variável: %d\n", &hamburguer, *ha);
    printf("posição da variável: %d\n ponteiro com posição da variável: %d\n", &itAguaGeladaa, *agua);

}