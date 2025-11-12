#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    char tipo = 'v';
    int i, tamanho;

    while (tipo != 'f'){
        printf("Conversor de valores:\n"
            "[b] = de binario para decimal\n"
            "[d] = de decimal para binario\n"
            "[f] = para encerrar\n"
            "Digite sua escolha: ");
        scanf("%c", &tipo);

        if (tipo == 'b'){
            char *valor[] = {};
            scanf("%s", valor);
            int tamanho = sizeof(valor) / sizeof(valor[0]);
            int cont = 0;
            int resultado = 0;
            for (i = tamanho-1; i >= 0; i--){
                resultado += ((int) valor[i]) * pow(2, cont);
                cont++;
            }
            printf("%d\n", resultado);


        } else if (tipo == 'c'){
            int valor;
            scanf("%d", &valor);
            int arr[] = {};
            i = 0;
            while (valor != 0){
                if (valor % 2 == 0){
                    arr[i] = 1;
                    valor /= 2;
                } else {
                    arr[i] = 0;
                    valor /= 2;
                }
                i++;
            }

            tamanho = sizeof(arr) / sizeof(arr[0]);
            for (i = 0; i < tamanho; i++){
                printf("%d", arr[i]);
            }
            printf("\n");
        
        } else if (tipo == 'f'){
            break;
        }
    }

    return 0;
}