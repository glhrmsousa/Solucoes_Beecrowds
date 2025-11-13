#include <stdio.h>
 
int main() {
 
    int produto1, quantidade;
    double precoTotal = 0;

    scanf("%d %d", &produto1, &quantidade);

    if (produto1 == 1){
        precoTotal += 4.00;
    }else if (produto1 == 2){
        precoTotal += 4.50;
    }else if (produto1 == 3){
        precoTotal += 5.00;
    }else if (produto1 == 4){
        precoTotal += 2.00;
    }else if (produto1 == 5){
        precoTotal += 1.50;
    }

    precoTotal *=  quantidade;

    printf("Total: R$ %.2lf\n", precoTotal);

    return 0;
}