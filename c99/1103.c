#include <stdio.h>
 
int main() {
    int h1, m1, h2, m2, tempoH, tempoM, tempotot;

    while (1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if (h1==0 && m1==0 && h2==0 &&m2==0){
            break;
        }
        tempoH = h2 - h1;
        tempoM = m2 - m1;
        if(tempoM < 0){
            tempoM += 60;
            tempoH -= 1;
        }
        if (tempoH < 0){
            tempoH += 24;
        }

        tempotot = tempoH*60 + tempoM;
        printf("%d\n", tempotot);
    }
    return 0;
}