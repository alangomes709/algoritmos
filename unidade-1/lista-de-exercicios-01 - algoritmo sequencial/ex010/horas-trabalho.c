#include<stdio.h>

int main() {
    int horasMes;
    float valorHora, desconto, salaBrut, descTotal, salaLiq;

    printf("Quantas horas você trabalha por mês?\n");
    scanf("%d", &horasMes);

    printf("Quanto você recebe por hora trabalhada?\n");
    scanf("%f", &valorHora);

    printf("Qual o desconto do seu salário?\n");
    scanf("%f", &desconto);
    salaBrut = horasMes * valorHora;
    printf("Seu salário bruto é: %f\n", salaBrut);
    descTotal = (desconto/100) * salaBrut;
    printf("Total do desconto: %f\n", descTotal);
    salaLiq = salaBrut - descTotal;
    printf("Salário líquido: %f\n", salaLiq);
    return 0;
    
}