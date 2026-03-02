#include<stdio.h>
int main(){
    int vet[10];
    int i, j, aux;
    printf("Digite dez números inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    // for ( i = 0; i < 9; i++)
    // {
    //     for ( j = 0; j < 9-i; j++)
    //     {
    //         if (vet[j]>vet[j+1])
    //         {
    //             aux=vet[j];
    //             vet[j]=vet[j+1];
    //             vet[j+1]=aux;
    //         }
            
    //     }
        
    // }
    //definitivo:

    for ( i = 0; i < 10; i++)
    {
        for ( j = i; j < 10; j++)
        {
            if (vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
            
        }
        
    }
    

    printf("vetor em ordem crescente\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", vet[i]);
    }
    

    return 0;
    
}