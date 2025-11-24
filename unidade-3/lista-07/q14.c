#include<stdio.h>

void somaTotal(int num, int h);

int main(){
    int algo = 100;
    int h=algo;
    somaTotal(algo, h);
    // printf("%d \n", somaTotal(algo, h));
}

void somaTotal(int num, int h) {
    int as=0;
    if (h<=1)
    {
        return;
    } else {
        somaTotal(as+=num, h-1);
        printf("%d   ", as);
    }
    
}