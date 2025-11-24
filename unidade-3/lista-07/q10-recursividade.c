#include<stdio.h>

void cresc(int x, int n);

int main(){
    int n;
    int x=1;
    scanf("%d", &n);
                // 5
    cresc(x, n);
    return 0;
}
            // 1       5 
            // 2
            // 3
            // 4
            // 5 
            //  6 // encerra
void cresc(int x, int n){
	if (x<=n){
		printf("%d ", x);
                // 1
                // 2
                // 3
                // 4
                // 5
		cresc(x+1, n);
            // 1 + 1
            // 2 + 1
            // 3 + 1
            // 4 + 1
            // 5 + 1
    }
}
