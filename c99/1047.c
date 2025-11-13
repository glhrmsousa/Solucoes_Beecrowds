#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int hi, mi, hf, mf, sh, sm;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    sh = hf - hi;
    sm = mf - mi;

    if (sh <= 0){
        sh += 24;
    }
    if (sm < 0){
        sm += 60;
        sh -= 1;
    }

    if (sh==24 &&  sm > 0){
        sh = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", sh, sm);

    return 0;
}