#include <stdio.h>
#include <string.h>
 
int main() {
    int qtd;

    scanf("%d", &qtd);

    while (qtd-- > 0){
        char nome1[50], nome2[50];
        char escolha1[6], escolha2[6];
        int n1, n2, soma;

        scanf(" %s %s %s %s", nome1, escolha1, nome2, escolha2);
        scanf("%d%d", &n1, &n2);

        soma = n1 + n2;

        if (strcmp(escolha1, "PAR") == 0){
            printf("%s\n", (soma % 2 == 0) ? nome1 : nome2);    
        } else {
            printf("%s\n", (soma % 2 == 0) ? nome2 : nome1); 
        }        

    }
    return 0;
}