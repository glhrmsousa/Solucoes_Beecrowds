#include <stdio.h>

int main()
{
    int n, i, ultimo, penultimo, atual;
    atual = ultimo = penultimo = 0;
    scanf("%d", &n);

    for (i=1; i <= n; i++){
        if (i == 2){
            atual++;
        }
        
        if (i != n){
            printf("%d ", atual);
        }else{
            printf("%d\n", atual);
        }
                
        penultimo = ultimo;
        ultimo = atual;
        atual = penultimo + ultimo;
    }

    return 0;
}