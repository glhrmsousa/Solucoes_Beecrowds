#include <stdio.h>

int main()
{
    int testes, dias;
    double comida;


    scanf("%d", &testes);

    while (testes>0){
        scanf("%lf", &comida);
        dias = 0;
        while (comida>1){
            comida /= 2;
            dias++;
        }
        printf("%d dias\n", dias);
        testes--;
    }
}