#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int numeros[1000];
    int n, i, j = 0;

    scanf("%d", &n);

    while (j < 1000){
        for (i = 0; i < n; i++){
            if (j >= 1000){
                break;
            }
            numeros[j] = i;
            printf("N[%d] = %d\n", j, numeros[j]);
            j++;
        }

    }
    return 0;
}