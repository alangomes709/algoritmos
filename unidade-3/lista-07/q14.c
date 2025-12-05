#include<stdio.h>

void somaTotal(int num, int h);

int main(){
    int algo = 1;
    int h=100;
    somaTotal(algo, h);
    // printf("%d", somaTotal(algo, h));
}

void somaTotal(int num, int h){
    int g=0;
    if (h<=0)
    {
        return;
    } else{
        somaTotal(g+=num+1, h-1);
        printf("%d ", g);
    }
    
}