#include<stdio.h>
int main(){
    char str1[21];
    char str2[21];
    scanf("%s", str1);
    scanf("%s", str2);
    printf("String 2: %s\n", str2);
    printf("String 1: %s\n", str1);
    printf("Segunda letra: String 1: %c\n", str1[1]);
    printf("Segunda letra: String 2: %c\n", str2[1]);
    return 0;
}