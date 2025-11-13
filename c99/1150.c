#include <stdio.h>

int main()
{
    int x, z, cont = 0, soma = 0;
    
    scanf("%d %d", &x, &z);
    while (z <= x){
        scanf("%d", &z);
    }

    while (soma < z){
        soma += x;
        cont ++;
        x++;
    }
    
    printf("%d\n", cont);    
    
    return 0;
}