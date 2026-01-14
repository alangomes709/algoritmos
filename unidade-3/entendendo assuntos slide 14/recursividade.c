#include<stdio.h>

int fibo(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
    
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", fibo(x));
    return 0;
}