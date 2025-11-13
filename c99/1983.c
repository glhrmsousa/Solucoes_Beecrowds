#include <stdio.h>

int main() {
    int qtd, pos;
    double maior = -1.0;

    scanf("%d", &qtd);

    int matricula[qtd];
    double nota[qtd];
    for (int i = 0; i < qtd; i++){
        scanf("%d %lf", &matricula[i], &nota[i]);
        if (nota[i] > maior){
            pos = i;
            maior = nota[i];
        }
    }

    if (nota[pos] < 8){
        printf("Minimum note not reached\n");
    } else {
        printf("%d\n", matricula[pos]);
    }    

    return 0;
}