#include <stdio.h>

int main()
{
    int rodadas, vencedor, maryWins, johnWins;

    while (1){
        scanf("%d", &rodadas);
        if (rodadas == 0){
            break;
        }
        maryWins = johnWins = 0;

        for (int i = 0; i < rodadas; i++){
            scanf("%d", &vencedor);
            if (vencedor == 0){
                maryWins++;
            }else if (vencedor == 1){
                johnWins++;
            }
        }
        printf("Mary won %d times and John won %d times\n", maryWins, johnWins);
        }
}