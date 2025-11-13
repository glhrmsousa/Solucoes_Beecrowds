#include <stdio.h>

int main() {
    int salto, qtd, i, win = 1;

    scanf("%d %d", &salto, &qtd);
    int cano[qtd];

    //entrada dos tamanhos de todos os canos
    for (i = 0; i < qtd; i++){
        scanf("%d", &cano[i]);
    }

    //analisa se existe uma diferenca entre canos seguidos maior que o tamanho do salto
    for (i = 1; i < qtd; i++){
        if ((cano[i] - cano[i-1] > salto) || (cano[i-1] - cano[i] > salto)){
            win = 0;
            break;
        }
    }

    if (win){
        printf("YOU WIN\n");
    } else{
        printf("GAME OVER\n");
    }
    return 0;
}