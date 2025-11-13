#include <stdio.h>
 
int main() {
    int n, cont = 0;

    scanf("%d", &n);

    if (n % 2 == 0){
        n++;
    }

    for (n; cont < 6; n += 2){
        printf("%d\n", n);
        cont++;
    }

    return 0;
}