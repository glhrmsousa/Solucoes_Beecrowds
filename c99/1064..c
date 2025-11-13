#include <stdio.h>
 
int main() {
 
    int i, cont;
    float numero, soma, media;
    
    soma = cont = i= 0;
    
    while (i < 6){
        scanf("%f", &numero);
        if (numero > 0){
            soma += numero;
            cont += 1;
        }
        i++;
    }
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", soma/cont);
    
 
    return 0;
}