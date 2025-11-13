#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int horas, minutos;
    
    while ((scanf("%d:%d", &horas, &minutos)) != EOF){
        minutos += horas*60 + 60;

        minutos -= 8*60;

        if (minutos > 0){
            printf("Atraso maximo: %d\n", minutos);
        } else {
            printf("Atraso maximo: 0\n");
        }
    }
}