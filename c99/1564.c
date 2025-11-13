#include <stdio.h>

int main() {
    int reclamacao, resultado;

    while (1){

        resultado = scanf("%d", &reclamacao);
        if (resultado == EOF){
            break;
        }

        (reclamacao)
        ? printf("vai ter duas!\n")  // caso a entrada seja diferente de 0
        : printf("vai ter copa!\n"); // caso a entrada seja igual a 0
    }
    
    return 0;
}