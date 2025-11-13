#include <stdio.h>

int main()
{
    int tipoCha;
    int i = 0, termo, contador = 0;

    scanf("%d", &tipoCha);

    for (i; i < 5; i++){
        scanf("%d", &termo);
        if (termo == tipoCha){
            contador++;
        }

    }
    printf("%d\n", contador);
        
    return 0;
}