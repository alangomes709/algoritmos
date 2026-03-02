#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i, g;
    fgets(string, 100, stdin);
    printf("string padrão: %s \n", string);
    for ( i = 0; i < 100; i++)
    {
        if (string[i]=='a')
        {
            g++;
            string[i]='b';
        }
        
    }
    
    printf("string modificada: %s \n", string);
    printf("numero de caracteres modificados: %d", g);
    return 0;
}