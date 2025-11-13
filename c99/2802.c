#include <stdio.h>

long long combinacao2(int n) {
    return (long long)n * (n - 1) / 2;
}

long long combinacao4(int n) {
    return (long long)n * (n - 1) * (n - 2) * (n - 3) / 24;
}

int main() {
    int n;
    scanf("%d", &n);

    long long resultado = 1;

    if (n >= 2) {
        resultado += combinacao2(n);
    }

    if (n >= 4) {
        resultado += combinacao4(n);
    }

    printf("%lld\n", resultado);
    return 0;
}