#include<stdio.h>
#include<stdlib.h>

float conv(float temp){
    float result=0;
    return result=(temp-32)*(5.0/9.0);
}
int main(){
    float far;
    scanf("%f", &far);
    printf("%f", conv(far));
}