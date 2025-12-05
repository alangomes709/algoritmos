#include<stdio.h>
float esfera(float raio){
    float v;
    return v=(raio*raio*raio)*3.1414592;
}
int main(){
    float r;
    scanf("%f",&r);
    printf("%f", esfera(r));
}