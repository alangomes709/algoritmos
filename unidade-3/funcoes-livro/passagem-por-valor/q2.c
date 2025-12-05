#include<stdio.h>

void mesC(int n) {
    if (n<=0 || n>12)
    {
        return;
    }
    switch (n)
    {
    case 1:
        printf("Janeiro");
        break;
    
    case 2:
        printf("Fev");
        break;
    
    case 3:
        printf("MAr");
        break;
    
    case 4:
        printf("Abr");
        break;
    
    case 5:
        printf("Mai");
        break;
    
    case 6:
        printf("jun");
        break;
    
    case 7:
        printf("julh");
        break;
    
    case 8:
        printf("ago");
        break;
    
    case 9:
        printf("Set");
        break;
    case 10:
        printf("Out");
        break;
    case 11:
        printf("Nov");
        break;
    case 12:
        printf("Dez");
        break;
    default:
        break;
    }
    
}


int main(){
    int mes;
    scanf("%d", &mes);
    mesC(mes);

}