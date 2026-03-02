#include<stdio.h>
int main(){
    int veta[10], vetb[10], vetc[20];
    int i, j, aux;
    printf("Digite numeros para preencher veta: \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &veta[i]);
    }
    printf("Digite numeros para preencher vetb: \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &vetb[i]);
    }
    for ( i = 0; i < 10; i++)
    {   
        vetc[i]=veta[i];
    }
    for ( i = 0; i < 10; i++)
    {   
        vetc[i+10]=vetb[i];
    }

    for ( i = 0; i < 20; i++)
    {
        for ( j = i; j < 20; j++)
        {
            if (vetc[j]>vetc[i])
            {
                aux=vetc[i];
                vetc[i]=vetc[j];
                vetc[j]=aux;
            }
            
        }
        
    }
    

    printf("vetc\n");
    for ( i = 0; i < 20; i++)
    {
        printf("%d\n", vetc[i]);
    }
    
    
}