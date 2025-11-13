#include <stdio.h>

int main ()
{
    double m[12][12];
    char tipo;
    int colunaDesejada, i, j;
    double soma = 0;

    scanf("%d", &colunaDesejada);
    scanf(" %c", &tipo);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if (j == colunaDesejada){
                soma += m[i][colunaDesejada];
            }
        }
    }

    if (tipo == 'S'){
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}