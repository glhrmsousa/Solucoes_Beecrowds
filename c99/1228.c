#include <stdio.h>

// Retorna a posição do carro "carro" na largada
int posNaLargada(int carro, int gL[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++)
        if(gL[i] == carro) return i;
    return -1;
}

int BubbleSort(int gL[], int gA[], int tamanho){
    int i, j;
    int temp, contUltrapassagens = 0;

    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - 1 - i; j++){
            // Compara posição na largada
            if(posNaLargada(gA[j], gL, tamanho) > posNaLargada(gA[j+1], gL, tamanho)){
                // Troca os carros
                temp = gA[j];
                gA[j] = gA[j+1];
                gA[j+1] = temp;
                contUltrapassagens++;
            }
        }
    }

    return contUltrapassagens;
}



int main() {
    int tamanho, i, resultado;

    while (scanf("%d", &tamanho) == 1){
    int gridLargada[tamanho];
    int gridAtual[tamanho];

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &gridLargada[i]);
    }

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &gridAtual[i]);
    }

    int resultado = BubbleSort(gridLargada, gridAtual, tamanho);

    printf("%d\n", resultado);
}


    return 0;
}