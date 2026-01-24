#include<stdio.h>
#include<stdlib.h>
main() {
    short int i = 5;
    char c = 'G';
    printf("Endereco de i: %d\n", &i);
    printf("Endereco de c: %d\n", &c);
    
    short int *pi;
    char *pc;
    
    pi = &i;
	pc = &c;
	
	printf("%d\n", pi);
	printf("%d\n", pc);
}

