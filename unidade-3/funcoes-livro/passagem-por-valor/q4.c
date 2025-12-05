#include<stdio.h>

float cilindro(float alt, float raio){
    float v;
    return v = (alt*3.1414592*(raio*raio));
}

int main(){
    float alt, raio;
    printf("Raio");
    scanf("%f", &raio);
    printf("alt");
    scanf("%f", &alt);
    printf("%f L ", cilindro(alt, raio));
}