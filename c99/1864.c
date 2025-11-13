#include <stdio.h>

int main() {
    char frase[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int quantidade;

    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++){
        printf("%c", frase[i]);
    }
    printf("\n");

    return 0;
}