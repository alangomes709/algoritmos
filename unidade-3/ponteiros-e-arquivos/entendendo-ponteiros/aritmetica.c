#include<stdio.h>
#include<stdlib.h>
int main(){
	int *super, *oi;
	int hasd=98;
	printf("hasd %d\n", hasd);
	super=&hasd;
	printf("super %d\n", *super);
	*super=*super+5;
	printf("super %d\n", *super);
	return 0;
	
}