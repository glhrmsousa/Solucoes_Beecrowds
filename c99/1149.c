#include <stdio.h>

int main()
{
    int x, y, i, soma = 0;
    
    scanf("%d %d", &x, &y);
    while (y <= 0){
        scanf("%d", &y);
    }

    for (x; y > 0; x++, y--){
        soma += x;
    }

    printf("%d\n", soma);
    
    return 0;
}