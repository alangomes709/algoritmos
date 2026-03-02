#include<stdio.h>
int main() {
    char sexo;
    printf("Digite F para feminino e M para masculino");
    scanf("%c", &sexo);

    if (sexo=='F')
    {
        printf("Feminino");
    }else if(sexo=='M') {
        printf("MAsculino");
    }else{
        printf("sexo inválido");
    }
    return 0;
}