#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long n1, n2, teste, f1, f2;

    while((teste = scanf("%lld %lld", &n1, &n2)) != EOF){
        if (teste != 2){
            break;
        }
        f1 = 1;
        f2 = 1;
        while(n1>0){
            f1 *= n1;
            n1 -= 1;
        }
        while(n2>0){
            f2 *= n2;
            n2 -= 1;
        }
        printf("%lld\n", f1+f2);        
    }

    return 0;
}