#include<stdio.h>
int main(){
    int veta[10], vetb[10], vetc[10], i, b=-1, c=-1;
    for ( i = 0; i < 10; i++)
    {
        printf("digite valor %d: ", i);
        scanf("%d", &veta[i]);
        if (veta[i]%2==0)
        {
            b++;
            vetb[b]=veta[i];
        }else{
            c++;
            vetc[c]=veta[i];
        }
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("n par %d = %d\n", i, vetb[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("n impar %d = %d\n", i, vetc[i]);
    }
    return 0;
}