#include<stdio.h>
#include<string.h>
int main(){
    char cargo[50];
    float salario;
    printf("Qual o seu cargo?");
    fgets(cargo, 50, stdin);
    // Remove trailing newline from fgets
    cargo[strcspn(cargo, "\n")] = 0;
    printf("Qual o seu salario?");
    scanf("%f", &salario);

    if (strcmp(cargo, "Gerente") == 0)
    {
        salario += salario * 0.1;
    } else if (strcmp(cargo, "Engenheiro") == 0)
    {
        salario += salario * 0.2;
    } else if (strcmp(cargo, "Técnico") == 0)
    {
        salario += salario * 0.3;
    } else {
        salario += salario * 0.4;
    }

    printf("Salario reajustado: %.2f\n", salario);
    return 0;
}