#include <stdio.h>

int OrganizaFila (int notas[], int tamanho){
    int notasOrganizadas[tamanho];
    int i, temp, mudar = 1, cont = 0;

    for (i = 0; i < tamanho; i++){
        notasOrganizadas[i] = notas[i];
    }

    while (mudar){
        mudar = 0;
        for (i = 0; i < tamanho-1; i++){
            if (notasOrganizadas[i] < notasOrganizadas[i+1]){
                temp = notasOrganizadas[i];
                notasOrganizadas[i] = notasOrganizadas[i+1];
                notasOrganizadas[i+1] = temp;
                mudar = 1;
            }
        }
    }

    for (i = 0; i < tamanho; i++){
        if (notas[i] == notasOrganizadas[i]){
            cont++;
        }
    }

    return cont;
}


int main() {
    int tamanho, i, resultado, tt;
    
    scanf("%d", &tt);
    
    while (tt-- > 0){
        scanf("%d", &tamanho);
        int notas[tamanho];

        for (i = 0; i < tamanho; i++){
            scanf("%d", &notas[i]);
        }

        resultado = OrganizaFila(notas, tamanho);

        printf("%d\n", resultado);
    }
    return 0;
}