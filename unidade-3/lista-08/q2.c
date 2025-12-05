#include<stdio.h>
#define PI 3.1415
struct circulo
{
    float raio;
};

float something(float r){
    return (r*r)*PI;
    
}

int main(){
    struct circulo area;
    scanf("%f", &area.raio);
    printf("area t %f\n", something(area.raio));
}