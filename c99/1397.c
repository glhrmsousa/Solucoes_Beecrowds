#include <stdio.h>

int main()
{
    int pontosJog1, pontosJog2;
    int numero1, numero2;
    int rodadas;

    while (1){
        scanf("%d", &rodadas);
        if (rodadas == 0){
            break;
        }
        pontosJog1 = pontosJog2 = 0;
        
        for (int i = 0; i < rodadas; i++){
            scanf("%d%d", &numero1, &numero2);
            
            if (numero1 > numero2){
                pontosJog1++;
            }else if (numero2 > numero1){
                pontosJog2++;
            }
        }
        printf("%d %d\n", pontosJog1, pontosJog2);
    }
}