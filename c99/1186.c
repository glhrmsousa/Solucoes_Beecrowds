#include <stdio.h>

int main ()
{
    double m[12][12];
    char tipo;
    int i, j, contador = 0;
    double soma = 0;

    scanf("%c", &tipo);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if (i + j > 11){
                soma += m[i][j];
                contador++;
            }
        }
    }

    if (tipo == 'S'){
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", (double) soma / contador);
    }

    return 0;
}