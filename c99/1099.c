#include <stdio.h>
 
int main() {
 
    int x, y, maior, menor, rep, soma;
    
    scanf("%d", &rep);
    
    while (rep > 0){
        scanf("%d %d", &x, &y);
        soma = 0;
        if (x>y){
            maior = x;
            menor = y + 1;
        }else{
            maior = y;
            menor = x + 1;
        }
        
        for (menor; menor < maior; menor++){
            if (menor % 2 == 1){
                soma += menor;
            }
        }
        printf("%d\n", soma);
        
        rep--;
    }
    return 0;
}