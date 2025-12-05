#include<stdio.h>

float imc(float peso, float alt){
    float imc;
    return imc=peso/(alt*alt);
}

int main(){
    float peso, altura;
    scanf("%f", &altura);
    scanf("%f", &peso);
    printf("%f", imc(peso, altura));

}