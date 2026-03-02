#include<stdio.h>
int main () {
    int lim, inc, i;
    printf("DIgite Lim");
    scanf("%d ", &lim);
    printf("DIgite inc");
    scanf("%d ", &inc);
    for (i = 0; i <=lim; i=i+inc)
    {
        printf("%d ", i);
    }
    return 0;   
}