#include <stdio.h>

int main()
{
    int n, i, soma, cont;

    while (1){
        scanf("%d", &n);
        if (n == 0){
            break;
        }

        cont = soma = 0;

        for (n; cont < 5;n++){
            if(n % 2 == 0){
                soma += n;
                cont++;
            }
        }

        printf("%d\n", soma);
    }
    
    return 0;
}