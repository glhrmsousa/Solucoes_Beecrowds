#include <stdio.h>

int main()
{
    int tt, i;
    unsigned long long nFIB, fib[60];

    scanf("%d", &tt);

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= 60; i++){
            fib[i] = fib[i-1] + fib[i-2];
    }
    while (tt-- > 0){
        scanf("%lld", &nFIB);
        printf("Fib(%llu) = %llu\n", nFIB, fib[nFIB]);
    }
    
    return 0;
}