#include <stdio.h>
 
int main() {
 
    int num, ehPrimo, i, rep;
    
    scanf("%d", &rep);

    while (rep > 0){
        scanf("%d", &num);
        i = num - 1;
        ehPrimo = 1;
        for (i; i>1; i--){
            if (num % i == 0){
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }
        rep--;
    }
    return 0;
}