#include <stdio.h>
#include <string.h>

int VerificaRisada(char risada[]){
    char vogaisRisada[51];
    int i, j, t, cont = 0;

    for (i = 0; risada[i] != '\0'; i++){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
            risada [i] == 'o' || risada[i] == 'u'){
                vogaisRisada[cont] = risada[i];
                cont++;
            }
    }
    vogaisRisada[cont] = '\0';
    t = strlen(vogaisRisada);

    for (i=0, j=t-1; j >= i; i++, j--)
        if (vogaisRisada[i] != vogaisRisada[j]){
            return 0;
        }
    
    return 1;
}


int main() {
    char risada[51];
    int engracada;

    scanf("%s", risada);

    engracada = VerificaRisada(risada);

    if (engracada){
        puts("S");
    } else {
        puts ("N");
    }

    return 0;
}