#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // número de casos

    for (int k = 0; k < N; k++) {
        int n1, d1, n2, d2;
        int n3, d3, n4, d4, n5;
        char barra1, barra2, op;

        scanf("%d %c %d %c %d %c %d", &n1, &barra1, &d1, &op, &n2, &barra2, &d2);

        // Operações
        if (op == '+') {
            n3 = n1 * d2 + n2 * d1;
            d3 = d1 * d2;
        } else if (op == '-') {
            n3 = n1 * d2 - n2 * d1;
            d3 = d1 * d2;
        } else if (op == '*') {
            n3 = n1 * n2;
            d3 = d1 * d2;
        } else if (op == '/') {
            n3 = n1 * d2;
            d3 = n2 * d1;
        }

        n4 = n3;
        d4 = d3;
        
        if (n4 < 0) {
            n5 = -n4;
        } else {
            n5 = n4;
        }
        int min = (n5 < d4) ? n5 : d4;
        for (int i = min; i > 1; i--) {
            if (n4 % i == 0 && d4 % i == 0) {
                n4 /= i;
                d4 /= i;
                break;
            }
        }

        printf("%d/%d = %d/%d\n", n3, d3, n4, d4);
    }

    return 0;
}