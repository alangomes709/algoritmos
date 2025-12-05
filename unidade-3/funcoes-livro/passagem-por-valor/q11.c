#include<stdio.h>
int quad(int a, int b){
    int res=1;
    for (int i = 0; i < b; i++)
    {
        res*=a;
    }
    return res;
}
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", quad(a, b));
    return 0;

}