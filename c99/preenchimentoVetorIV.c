#include <stdio.h>

void imprimeSequencia(int seq[], int tamanho, const char *tipo) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s[%d] = %d\n", tipo, i, seq[i]);
    }
}

int main() {
    int pares[5], impares[5];
    int n, contPares = 0, contImpares = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            pares[contPares++] = n;
            if (contPares == 5) {
                imprimeSequencia(pares, contPares, "par");
                contPares = 0;
            }
        } else {
            impares[contImpares++] = n;
            if (contImpares == 5) {
                imprimeSequencia(impares, contImpares, "impar");
                contImpares = 0;
            }
        }
    }

    if (contImpares > 0) imprimeSequencia(impares, contImpares, "impar");
    if (contPares > 0)   imprimeSequencia(pares, contPares, "par");

    return 0;
}
