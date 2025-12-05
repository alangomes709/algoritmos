#include<stdio.h>
int seg(int h, int m, int s){
    int Mtotal, Stotal;
    Mtotal=(h*60);
    Stotal=(Mtotal*60)+(m*60)+s;
    return Stotal;
}
int main(){
    int h, m, s;
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);
    printf("%ds", seg(h, m, s));
}