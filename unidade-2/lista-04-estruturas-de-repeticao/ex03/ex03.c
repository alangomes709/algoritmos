#include<stdio.h>
int main() {
    int num = 0, i;

    for (i = 1; i <= 100; i++)
    {
        num=num+i;
    }
    
    printf("%d ", num);
    return 0;
}