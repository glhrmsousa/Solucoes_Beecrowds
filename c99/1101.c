#include <stdio.h>
 
int main() {
 
    int n1, n2, maior, menor, soma;
    
    while(1){
        scanf("%d %d", &n1, &n2);
        
        if (n1 <= 0 || n2 <= 0){
            break;
        }
        soma = 0;
            
        if (n1>n2){
            maior = n1;
            menor = n2;
        }else{
            maior = n2;
            menor = n1;
        }
        
        while (menor<=maior){
            printf("%d ", menor);
            soma += menor;
            menor++;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}