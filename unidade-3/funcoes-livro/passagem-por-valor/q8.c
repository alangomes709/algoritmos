#include<stdio.h>
#include<math.h>

void quad(float num){
    float raiz;
    if (num>0)
    {
        raiz=sqrt(num);
        if (raiz*raiz==num)
        {
            printf("é um quadrado perfeito");
            return;
        }else {
        printf("NÃO é um quadrado perfeito");
        return;
    }
    } else if (num<0)
    {
        printf("Não pode ser negativo");
        return;
    }
    
}

int main(){
    float num;
    scanf("%f", &num);
    quad(num);

}
