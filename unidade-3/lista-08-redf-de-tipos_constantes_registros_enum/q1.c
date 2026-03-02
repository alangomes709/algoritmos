#include<stdio.h>
typedef float quilometros;

float conversao(quilometros tam){
    return tam*1000;
}


int main(){
    quilometros valor;
    scanf("%f", &valor);
    printf("o valor em metros %1.fm\n", conversao(valor));
    return 0;

}