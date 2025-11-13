#include <stdio.h>
 
int main() {
 
    int rep, n, maior, menor, pos;
    rep = 1;
    maior = 0;

    for(rep; rep <= 100; rep++){
        scanf("%d", &n);
        if (rep == 1 || n > maior){
            maior = n;
            pos = rep;
        }
    }
    printf("%d\n%d\n", maior, pos);

    
    return 0;
}