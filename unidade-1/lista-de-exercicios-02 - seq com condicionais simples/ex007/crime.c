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

    somaFinal=q1+q2+q3+q4+q5;
    
    if(somaFinal>=6){
        printf("Erro! Insira apenas 0 ou 1\n");
    }
    
    if(somaFinal<=-1){
        printf("Erro! Insira apenas 0 ou 1\n");
    }
     if(q1!=0){
        if(q1!=1){
            printf("Erro! Insira apenas 0 ou 1\n");
            return 0;
        }
    }
     if(q2!=0){
        if(q2!=1){
            printf("Erro! Insira apenas 0 ou 1\n");
            return 0;
        }
    }
     if(q3!=0){
        if(q3!=1){
            printf("Erro! Insira apenas 0 ou 1\n");
            return 0;
        }
    }
     if(q4!=0){
        if(q4!=1){
            printf("Erro! Insira apenas 0 ou 1\n");
            return 0;
        }
    }
     if(q5!=0){
        if(q5!=1){
            printf("Erro! Insira apenas 0 ou 1\n");
            return 0;
        }
    }
    
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