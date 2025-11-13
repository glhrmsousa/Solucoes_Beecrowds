#include <stdio.h>

int main()
{
    int cont, x, y, soma, rep;

    scanf("%d", &rep);
    
    while (rep > 0){
        soma = cont = 0;
        scanf("%d %d", &x, &y);

        for (x; cont < y; x++){
            if (x % 2 != 0){
                soma += x;
                cont ++;
            }
        }
        printf("%d\n", soma);  

        rep--;
    }
    return 0;
}