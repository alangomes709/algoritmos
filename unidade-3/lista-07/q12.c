#include<stdio.h>
//                pos 0         5
//                pos 0         4
//                pos 0         3
//                pos 0         2
//                pos 0         1
//                pos 0         0
int somaVetor(int vetor[], int tamV){
// opa valor 0
    if (tamV==0)
    {   
//      retorna pra função que chamou ---------
        return 0;
    }
//                                            .       pos 0     5-1
//                                            .       pos 0     4-1
//                                            .       pos 0     3-1
//                                            .       pos 0     2-1
//                                            .       pos 0     1-1
//                                            .       pos 0     0
//                                            !
    return vetor[tamV-1] = vetor[tamV-1] + somaVetor(vetor, tamV-1);
//     valor:  1  pos 0
//     valor:  9  pos 1
//     valor: 13  pos 2
//     valor: 16  pos 3
//     valor: 18  pos 4
//     valor: 24  pos 5
}

int main(){
    int vet[6]={6,2,3,4,8,1};
    int tamVet=6;
    printf("%d", somaVetor(vet, tamVet));

    return 0;
}