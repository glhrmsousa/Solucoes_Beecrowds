#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int VerificacaoSeContar (int qtd,  char pomekons[qtd][1002], char pomekon[1002]){
    int i = 0;

    while (strcmp(pomekons[i], "\0") != 0){
        if (strcmp(pomekons[i], pomekon) == 0){
            return 0;
        }
        i++;
    }

    strcpy(pomekons[i], pomekon);
    return 1;

}


int main(void) {
    int cont = 151, qtd;
    char lixo;

    scanf("%d%c", &qtd, &lixo);
    char pomekons[qtd][1002];
    char pomekon[1002];

    for (int i = 0; i < qtd; i++){

        fgets(pomekon, 1002, stdin);
        pomekon[strcspn(pomekon, "\n")] = '\0';

        int resultado = VerificacaoSeContar(qtd, pomekons, pomekon);

        cont -= resultado;
    }

    printf("Falta(m) %d pomekon(s).\n", cont);

    return 0;
}