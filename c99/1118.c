#include <stdio.h>
 
int main() {
 
    double n1, n2, media;
    int novoCalculo;
    
    while (1){
        while (1){
            scanf("%lf", &n1);
            if (n1 < 0 || n1 > 10){
                printf("nota invalida\n");
            }else{
                break;
            }
        }
        
        while (1){
            scanf("%lf", &n2);
            if (n2 < 0 || n2 > 10){
                printf("nota invalida\n");
            }else{
                break;
            }
        }
        
        media = (n1+n2)/2;
        printf("media = %.2lf\n", media);
        
        novoCalculo = 0;
        while (novoCalculo < 1 || novoCalculo > 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novoCalculo);
        }
        if (novoCalculo == 2){
            break;
        }
    }
    return 0;
}