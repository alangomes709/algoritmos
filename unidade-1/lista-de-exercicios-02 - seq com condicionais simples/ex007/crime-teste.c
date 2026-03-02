#include <stdio.h>

int main() {
    int q1, q2, q3, q4, q5;
    int somaFinal;
    printf("Responda: '1' para Sim e '0' para Não\n");
    printf("Telefonou para a vítima?\n");
    scanf("%d", &q1);
    printf("Esteve no local do crime?\n");
    scanf("%d", &q2);
    printf("Mora perto da vítima?\n");
    scanf("%d", &q3);
    printf("Devia para a vítima?\n");
    scanf("%d", &q4);
    printf("Já trabalhou com a vítima?\n");
    scanf("%d", &q5);
    
    
    //calculo
    if ((q1, q2, q3, q4, q5) <0)
    {
        printf("erro");
        return 0;
    }else if ((q1, q2, q3, q4, q5) > 1)
    {
        printf("Erro");
        return 0;
    }else{
        return 0;
    }
    somaFinal=q1+q2+q3+q4+q5;
    

    
    
    if(somaFinal==2){
        printf("Classificação: Suspeito");
        }else if(somaFinal==5){
            printf("Classificação: Assassino");
        }else if(somaFinal==3){
            printf("Classificação: Cúmplice");
        }else if(somaFinal==4){
            printf("Classificação: Cúmplice");
        }else if(somaFinal==0){
            printf("Classificação: Inocente");
        }else if(somaFinal==1){
            printf("Classificação: Inocente");
        }
    
    return 0;
}