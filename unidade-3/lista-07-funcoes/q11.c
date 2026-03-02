#include<stdio.h>
#include<stdio.h>

void decresc(int x, int n);

int main(){
    int n;
    int x=1;
    scanf("%d", &n);
            //5
    decresc(x, n);
    return 0;
}
            //   1         5
            //             4
            //             3
            //             2
            //             1
            //             0 // encerra
void decresc(int x, int n){
	if (n>=x){
		printf("%d ", n);
                // 5
                // 4
                // 3
                // 2
                // 1
		decresc(x, n-1);
                    // 5-1
                    // 4-1
                    // 3-1
                    // 2-1
                    // 1-1
    }
}
