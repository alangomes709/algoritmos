#include<stdio.h>
int main () {
    float saldoM, credito;
    printf("Insira seu saldo médio do último ano");
    scanf("%f", &saldoM);
    if (saldoM<200)
    {
        printf("Seu sado médio é: %f e seu crédito não está disponível pois não se enquadra no requisito", saldoM);
    }else if (saldoM>201 && saldoM<400)
    {
        credito=saldoM*0.2;
        printf("Seu sado médio é: %f e seu crédito é: %f", saldoM, credito);
    }else if (saldoM>401 && saldoM<600)
    {
        credito=saldoM*0.3;
        printf("Seu sado médio é: %f e seu crédito é: %f", saldoM, credito);
    } else if (saldoM>600)
    {
        credito=saldoM*0.4;
        printf("Seu sado médio é: %f e seu crédito é: %f", saldoM, credito);
    }
    return 0;
}