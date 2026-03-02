#include<stdio.h>
int main() {
    int i, num, maior, menor;
    for (i = 0; i <= 10; i++)
    {
        printf("Digite num ");
        scanf("%d", &num);

        if (i==0)
        {
            maior=menor=num;
        }else{
            if (num>maior)
            {
                maior=num;
            }
            if (num<menor)
            {
                menor=num;
            }
        }
        
    }
    printf("maior %d\nmenor %d\n", maior, menor);
    return 0;
}