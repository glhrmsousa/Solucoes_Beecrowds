#include <stdio.h>

int main() {
    int i, j, linhaDesejada;
    double M[12][12], soma = 0;
    char operacao;

    scanf("%d", &linhaDesejada);
    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (j = 0; j < 12; j++) {
        soma += M[linhaDesejada][j];
    }

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else if (operacao == 'M')
        printf("%.1lf\n", soma / 12.0);

    return 0;
}