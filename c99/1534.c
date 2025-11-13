#include <stdio.h>

int main() {
    int resultado, tamanho;

    while (1) {
        resultado = scanf("%d", &tamanho);
        if (resultado == EOF) {
            break;
        }

        int matriz[tamanho][tamanho];

        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                if (j == tamanho - i - 1) {
                    matriz[i][j] = 2;  
                } else if (j == i) {
                    matriz[i][j] = 1;  
                } else {
                    matriz[i][j] = 3;  
                }
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}