#include <stdio.h>

int main()
{
    int i, j = 1;
    double soma = 0;

    for (i = 1; i <= 39; i+=2){
        soma += 1.0*i/j;
        j *= 2;
    }

    printf("%.2lf\n", soma);

    return 0;
}