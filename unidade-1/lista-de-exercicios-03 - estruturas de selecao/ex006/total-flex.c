#include<stdio.h>
int main () {
    char tipo;
    float quant;
    printf("Use G para gasolina e A para alcool\n");
    scanf("%c", &tipo);
    printf("Quanto voce quer em litros?\n");
    scanf("%f", &quant);
    switch(tipo){
    	case 'G':
    		if(quant>20){
    			printf("Valor a pagar %f", 8.00*quant-((8.00*quant)*0.06));
			}else if(quant<=20){
				printf("Valor a pagar: %f", 8.00*quant-((8.00*quant)*0.04));
			}
			break;
		case 'A':
			if(quant>20){
    			printf("Valor a pagar %f", 6.00*quant-((6.00*quant)*0.05));
			}else if(quant<=20){
    			printf("Valor a pagar %f", 6.00*quant-((6.00*quant)*0.03));
			}
			break;
		default:
			printf("Insira somente letras maiusculas: G ou A.");	
	}
	return 0;
}