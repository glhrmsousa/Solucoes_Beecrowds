#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i, f;

    scanf("%d %d", &i, &f);

    if (i >= f){
        f += 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", f-i);

    return 0;
}