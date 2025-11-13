#include <stdio.h>

int main()
{
    long long int atq, def, teste, diferenca;

    while ((teste = scanf("%lld %lld", &atq, &def)) != EOF){
        if (teste != 2){
            break;
        }
    diferenca = atq - def;
    if (diferenca<0){
        diferenca = -diferenca;
    }
    printf("%lld\n", diferenca);
    }
    return 0;
}