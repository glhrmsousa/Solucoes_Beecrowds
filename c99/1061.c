#include <stdio.h>
 
int main() {
    char day[4], doispontos;
    int dia1, h1, m1, s1;
    int dia2, h2, m2, s2;
    int dif_dia, dif_h, dif_m, dif_s;

    scanf("%s %d", day, &dia1);
    scanf("%d %c %d %c %d", &h1, &doispontos, &m1, &doispontos, &s1);
    scanf("%s %d", day, &dia2);
    scanf("%d %c %d %c %d", &h2, &doispontos, &m2, &doispontos, &s2);
    
    dif_dia = dia2 - dia1;
    dif_h = h2 - h1;
    dif_m = m2 - m1;
    dif_s = s2 - s1;

    if (dif_s < 0){
        dif_s += 60;
        dif_m -= 1;
    }

    if (dif_m < 0){
        dif_m += 60;
        dif_h -= 1;
    }

    if (dif_h < 0){
        dif_h += 24;
        dif_dia -= 1;
    }

    printf("%d dia(s)\n", dif_dia);
    printf("%d hora(s)\n", dif_h);
    printf("%d minuto(s)\n", dif_m);
    printf("%d segundo(s)\n", dif_s);
}