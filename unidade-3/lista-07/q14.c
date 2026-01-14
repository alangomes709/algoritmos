#include<stdio.h>

int soma(int ini, int n){
    if (ini>=n)
    {
        return 0;
    }else{
        
        return ini+soma(ini+1, n);
    }    


}


int main(){
    int j=1;
    int n;
    scanf("%d", &n);
    printf("%d", soma(j, n));
    
    
    return 0;
}

