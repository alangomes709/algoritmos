#include<stdio.h>

int maiorMenor(int n, int b);

int main(){
    int n1=56, n2=21;
    printf("%d", maiorMenor(n1, n2));

}

int maiorMenor(int n, int b){
    if (n<b)
    {
        return b;
    }else{
        return n;
    }
    
}