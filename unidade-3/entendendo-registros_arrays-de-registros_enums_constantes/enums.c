#include<stdio.h>

enum mes {jan=1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};

int main(){
    int m1, m3, m4;
    m1=jan;
    m3=mar;
    m4=m1+m3;
    printf("%d\n", m1);
    printf("%d\n", m3);
    printf("abril %d\n", m4);
    return 0;
}