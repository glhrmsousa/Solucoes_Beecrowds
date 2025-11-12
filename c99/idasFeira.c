#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char nome[50];
    double valor;
} Produto;

int findIndex(Produto v[], int n, const char *nome) {
    for (int i = 0; i < n; i++) {
        if (strcmp(v[i].nome, nome) == 0) return i;
    }
    return -1;
}


int main (void){
    int idasFeira, estoque, comprados, i;
    double valorTotal;
    char lixo;

    scanf("%d", &idasFeira);

    while (idasFeira-- > 0){
        // ESTOQUE
        valorTotal = 0;
        scanf("%d", &estoque);
        getchar();

        Produto produtos[estoque];

        for (i = 0; i < estoque; i++){
            scanf("%s %lf", produtos[i].nome, &produtos[i].valor);
        }

        // CONSUMO
        char nome[50];
        int qtd;

        scanf("%d", &comprados);
        getchar();

        for (i = 0; i < comprados; i++){
            scanf("%s %d", nome, &qtd);

            int idx = findIndex(produtos, estoque, nome);
            if (idx != -1) {
                valorTotal += produtos[idx].valor * qtd;
            }
        }

        printf("R$ %.2lf\n", valorTotal);        
    }
}
