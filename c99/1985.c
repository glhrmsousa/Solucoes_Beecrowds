#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    double cardapio[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
    int produtos, codigo, qtd;
    double valor = 0;

    scanf("%d", &produtos);
    getchar();

    while (produtos-- > 0){
        scanf("%d %d", &codigo, &qtd);
        codigo = codigo % 1000;

        valor += cardapio[codigo - 1] * qtd;
    }

    printf("%.2lf\n", valor);
}