#include <stdio.h>

int main()
{
    int N[20], y, i;

    for (i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    for (i = 0, y = 19; i < 20; i++, y--){
        printf("N[%d] = %d\n", i, N[y]);
    }
    return 0;
}