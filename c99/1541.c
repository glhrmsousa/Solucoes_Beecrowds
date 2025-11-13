#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int tamanhoTotal, ladoFinal;
    
    while (1){
        scanf("%d", &a);
            if (a == 0) {
                break;
            }
        scanf("%d%d", &b, &c);
        
        tamanhoTotal = (a*b*100) / c;
        ladoFinal = sqrt(tamanhoTotal);
        
        printf("%d\n", ladoFinal);
        
    }

    return 0;
}