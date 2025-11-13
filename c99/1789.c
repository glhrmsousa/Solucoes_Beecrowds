#include <stdio.h>
#include <string.h>

int main() {
    int qtd, resultado;

    while (1){
    resultado = scanf("%d", &qtd);

    if (resultado == EOF){
        break;
    }
    int lesmas [qtd], maior = -1;

    for(int i = 0; i < qtd; i++){
        scanf("%d", &lesmas[i]);
            if (lesmas[i] > maior){
                maior = lesmas[i];
            }
    }

    if (maior < 10)                       printf("1\n");
    else if (maior >= 10 && maior < 20)   printf("2\n");
    else                                  printf("3\n");
    }

    return 0;
}