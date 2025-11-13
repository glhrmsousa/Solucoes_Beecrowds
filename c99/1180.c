#include <stdio.h>

int main ()
{
    int i, pos = 0, tt;

    scanf("%d", &tt);
    int num[tt];

    for (i = 0; i < tt; i++){
        scanf("%d", &num[i]);
        if (num[i] < num[pos]){
            pos = i;
        }
    }

    printf("Menor valor: %d\n", num[pos]);
    printf("Posicao: %d\n", pos);

    return 0;
}