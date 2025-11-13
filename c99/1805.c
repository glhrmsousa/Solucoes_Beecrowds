#include <stdio.h>
 
int main() {
 
    long long int n1, n2, maior, menor, soma, i;
    soma = 0;
    scanf ("%lld %lld", &n1, &n2);

    if (n1 > n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }

    for (i = menor; i <=maior; i++){
        soma += i;
    }
    printf("%lld\n", soma);

    return 0;
}