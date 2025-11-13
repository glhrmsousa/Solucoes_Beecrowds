#include <stdio.h>

int main()
{
    int n, i, ehPrimo, rep;

    scanf("%d", &rep);

    while (rep > 0){
        ehPrimo = 1;
        scanf("%d", &n);

        if (n <= 1) {
            ehPrimo = 0;
        } else {
            for (i = 2; i * i <= n; i++){
                if (n % i == 0){
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo == 1){
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
        
        rep--;
    }

    return 0;
}