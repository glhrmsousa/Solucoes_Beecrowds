#include <stdio.h>
 
int main() {
 
    int i, numero, pares, impares, positivos, negativos;
    i = pares = impares = positivos = negativos = 0;
    
    while (i < 5){
        scanf("%d", &numero);
        if (numero > 0){
            positivos++;                     
        }else if (numero < 0){
            negativos++;
        }

        if (numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }

        i++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    
    
 
    return 0;
}