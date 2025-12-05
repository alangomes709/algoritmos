#include <stdio.h>
#include <stdlib.h>
void hamburguer3d(int g, int v);

int main()
{
    printf("Aqui está: \n");
    hamburguer3d(55, 609);
    return 0;
}


void hamburguer3d(int g, int v){
    if (g>100)
    {
        return;
    } else {
        hamburguer3d(g + 1, v + 67);
        printf("g= %d, v= %d\n", g, v);
    }
    
}