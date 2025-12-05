#include<stdio.h>

int primo(int n){
    int maior=0;
    if (n<=0)
    {
        printf("Não primo");
    }
    
    for (int i = 0; i < n; i++)
    {
        if (n%i==0)
        {
            maior=i;
        }
        
    }
    
    
}

int main(){
    int n;
}