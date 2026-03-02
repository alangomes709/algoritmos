#include<stdio.h>

int fat(int x);

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", fat(x));
}

int fat(int x){
    int f=1, i;
    for ( i = x; i >1; i--)
    {
        f=f*i;
    }
    return f;
       
}