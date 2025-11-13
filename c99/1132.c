#include <stdio.h>
 
int main() {
 
    int n1, n2, maior, menor, soma;
    soma = 0;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    if (n1 > n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }
    
    for(menor; menor <= maior; menor++){
        if (menor % 13 != 0){
            soma += menor;
        }
    }
    
    printf("%d\n", soma);
 
    return 0;
}