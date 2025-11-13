#include <stdio.h>
 
int main() {
 
    int i, n, soma, teste;;
    
    scanf("%d", &teste);

    while (teste > 0){
        scanf("%d", &n);
        i = 1;
        soma = 0;
        
        for(i; i < n; i++){
            if (n % i == 0){
                soma += i;
            }
        } 
        if (soma == n){
            printf("%d eh perfeito\n", n);
        }else{
            printf("%d nao eh perfeito\n", n);
        }
        teste--;
    }
    return 0;
}